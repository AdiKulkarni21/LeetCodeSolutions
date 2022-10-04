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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        
        ListNode *temp;
        temp=head;
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *next=curr->next;
        while(curr!=NULL&&(curr->next)!=NULL){
            if(prev==NULL){
                if(curr->val==next->val)
                {
                    curr=curr->next;
                    next=curr->next;
                    head=curr;
                    prev=NULL;
                    continue;
                }
               else{
                   prev=curr;
                   curr=curr->next;
                   next=curr->next;
               }
                          }
            if(prev!=NULL&&head->next->next!=NULL){
                if(curr->val==next->val)
                {
                    prev->next=next;
                    curr=next;
                    next=curr->next;
                }
                else{
                          prev=curr;
                          curr=curr->next;
                        next=curr->next;
                }
            }
        if(head->next->next==NULL)
            return head;
        
            
            
        }
 
      if(curr->next!=NULL&&curr->val==curr->next->val){
         curr->next=NULL;
     }
    return head;
    }
};