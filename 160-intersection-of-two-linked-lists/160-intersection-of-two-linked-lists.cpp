/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)
        return NULL;
        if(headA==headB)
            return headA;
        
        if(headA==headB->next)
        return headA;
        if(headA->next==headB)
            return headB;
        
      while (headB) {
        ListNode* temp = headA;
        while (temp) {
            // if both Nodes are same
            if (temp == headB)
                return headB;
            temp = temp->next;
        }
        headB = headB->next;
    }
    // intersection is not present between the lists
    return NULL;
    }
};