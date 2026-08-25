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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i=list1;
        ListNode* j=list2;
        ListNode* newhead=NULL;
        ListNode* newtail=NULL;
        while(i!=NULL&&j!=NULL){
            if(i->val<=j->val){
                int value=i->val;
                ListNode* newNode=new ListNode(value);
                if(newhead==NULL){
                    newhead=newNode;
                    newtail=newNode;
                }
                else{
                    newtail->next=newNode;
                    newtail=newNode;
                }
                i=i->next;
            }
            else{
                int value=j->val;
                ListNode* newNode=new ListNode(value);
                if(newhead==NULL){
                    newhead=newNode;
                    newtail=newNode;
                }
                else{
                    newtail->next=newNode;
                    newtail=newNode;
                }
                j=j->next;

            }
        }
        while(i!=NULL){
            int value=i->val;
            ListNode* newNode=new ListNode(value);
                if(newhead==NULL){
                    newhead=newNode;
                    newtail=newNode;
                }
                else{
                    newtail->next=newNode;
                    newtail=newNode;
                }
                i=i->next;
        }
        while(j!=NULL){
            int value=j->val;
            ListNode* newNode=new ListNode(value);
                if(newhead==NULL){
                    newhead=newNode;
                    newtail=newNode;
                }
                else{
                    newtail->next=newNode;
                    newtail=newNode;
                }
                j=j->next;
        }
        return newhead;
    }
};