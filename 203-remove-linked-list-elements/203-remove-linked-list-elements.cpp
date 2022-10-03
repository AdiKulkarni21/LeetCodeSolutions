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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return NULL;
        }
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode* next=curr->next;
        
        
        while(curr->next!=NULL){
            if((curr->val==val)&&(prev==NULL))
            {    head=head->next;             
                curr=head;
                next=curr->next;
            }
            else if(curr->val==val&&prev!=NULL){
                prev->next=next;
                curr=curr->next;
                next=curr->next;
            }
            else
            {
                prev=curr;
                curr=curr->next;
                next=curr->next;
            }
            
                
            
            
        }
        if(curr->val==val&&prev==NULL)
            return NULL;
        else if(prev!=NULL&&curr->val==val){
            prev->next=NULL;
        }
        
        return head;
    }
};