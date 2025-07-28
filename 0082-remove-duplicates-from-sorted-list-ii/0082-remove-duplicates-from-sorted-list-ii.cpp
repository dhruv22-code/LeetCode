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
        if( head == NULL || head->next == NULL)return head;
        ListNode *curr = head, *prev = NULL;
        head = NULL;
        bool b = true;
        while (curr != NULL ) {
            if (curr->next != NULL && curr->val == curr->next->val) {
                int value = curr->val;
                while (curr != NULL && curr->val == value) {
                    curr = curr->next;
                }
                if (prev != NULL)
                    prev->next = curr;
            } else {
                if(b){
                    head = curr;
                    b = false;
                }
                prev = curr;
                curr = curr->next;
            }
        }
        
        return head;
    }
};