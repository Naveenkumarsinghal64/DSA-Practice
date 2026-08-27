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
    ListNode* removeElements(ListNode* head, int target) {
        if(head==NULL){
            return head;
        }
        ListNode* temp1=head;
        while(temp1!=NULL&& temp1->val==target){
            ListNode* deleteNode=temp1;
            temp1=temp1->next;
            head=temp1;
            delete deleteNode;
        }
        if(head==NULL){
            return head;
        }
        else{
            temp1=head;
        }
        while(temp1->next!=NULL){
            if(temp1->next->val==target){
                ListNode* deleteNode=temp1->next;
                temp1->next=deleteNode->next;
                delete deleteNode;
            }
            else{
                temp1=temp1->next;
            }
        }
        return head;
    }
};