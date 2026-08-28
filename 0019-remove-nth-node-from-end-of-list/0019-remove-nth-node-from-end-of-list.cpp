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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev;
        ListNode* temp=head;
        if(n==1){
            ListNode* deleteNode=temp;
            temp=temp->next;
            head=temp;
            delete deleteNode;
        }
        else{
            for(int i=1;i<n-1;i++){
                temp=temp->next;
            }
            ListNode* deleteNode=temp->next;
            temp->next=deleteNode->next;
            delete deleteNode;
        }
        prev=NULL;
        curr=head;
        while(curr!=NULL){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev;
        return head;
    }
};