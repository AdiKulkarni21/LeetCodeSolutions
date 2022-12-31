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
    ListNode* swapPairs(ListNode* head) {
              //check edge cases
        if(!head || !head->next) return head;

        //swap head->value & head->next->value
        if(head != NULL && head->next != NULL){
            swap(head->val,head->next->val);
            //recursively call function on head->next->next
            swapPairs(head->next->next);
        }
        return head;
    }
};