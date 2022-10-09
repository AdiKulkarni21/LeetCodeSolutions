/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
           if (head == NULL) {
            return NULL;
        }
        
        Node* ptr = head;
        while (ptr != NULL) {
            Node* newNode = new Node(ptr->val);
            newNode->next = ptr->next;
            ptr->next = newNode;
            ptr = newNode->next;
        }
        ptr = head;
        
        while (ptr != NULL) {
            if (ptr->random == NULL) {
                ptr->next->random == NULL;
            } else {
                ptr->next->random = ptr->random->next;
            }
            ptr = ptr->next->next;
        }
        
        Node* oldPtr = head;
        Node* newPtr = head->next;
        Node* oldHead = head->next;
        
        while (oldPtr != NULL) {
            oldPtr->next = oldPtr->next->next;
            if (newPtr->next == NULL) {
                newPtr->next = NULL;
            } else {
                newPtr->next = newPtr->next->next;
            }
            oldPtr = oldPtr->next;
            newPtr = newPtr->next;
        }
        
        return oldHead;
    }
};