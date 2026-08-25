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
        while(head != NULL && head->val == target){
            ListNode* deleteNode = head;
            head = head->next;
            delete deleteNode;
        }
        ListNode* temp=head;
        
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->next->val==target){
                ListNode* deleteNode=temp->next;
                temp->next=deleteNode->next;
                delete deleteNode;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};