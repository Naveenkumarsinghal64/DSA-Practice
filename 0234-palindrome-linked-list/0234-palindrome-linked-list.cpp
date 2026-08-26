/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return false;
        }
        ListNode* temp=head;
        ListNode* head1=NULL;
        ListNode* tail1=NULL;
        while(temp!=NULL){
            ListNode* newNode=new ListNode(temp->val);
            if(head1==NULL){
                head1=newNode;
                tail1=newNode;
            }
            else{
                tail1->next=newNode;
                tail1=newNode;
            }
            temp=temp->next;
        }
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=head1;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head1=prev;
        while(head1!=NULL){
            if(head->val!=head1->val){
                return false;
            }
            head=head->next;
            head1=head1->next;
        }
        return true;
    }
};