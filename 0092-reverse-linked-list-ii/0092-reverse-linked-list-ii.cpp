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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL||head->next==NULL||left==right){
            return head;
        }
        ListNode* temp1=head;
        for(int i=1;i<=left-1;i++){
            temp1=temp1->next;
        }
        ListNode* temp2=head;
        for(int i=1;i<=right-1;i++){
            temp2=temp2->next;
        }
        ListNode* ans1=temp2->next;
        ListNode* revhead=NULL;
        ListNode* revtail=NULL;
        for(int i=1;i<=right-left+1;i++){
            ListNode* newNode=new ListNode(temp1->val);
            if(revhead==NULL){
                revhead=newNode;
                revtail=newNode;
            }
            else{
                revtail->next=newNode;
                revtail=newNode;
            }
            temp1=temp1->next;
        }        
        ListNode* prev=NULL;
        ListNode* curr=revhead;
        while(curr!=NULL){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        revhead=prev;
        if(left==1){
            head=revhead;
        }
        else{
            ListNode* nav=head;
            for(int i=0;i<left-2;i++){
                nav=nav->next;
            }
            nav->next=revhead;
        }
        ListNode* ans2=head;
        while(ans2->next!=NULL){
            ans2=ans2->next;
        }
        ans2->next=ans1;
        return head;
    }
};