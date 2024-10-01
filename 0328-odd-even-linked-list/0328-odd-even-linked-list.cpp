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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL)return head;
        ListNode* odd= head;
        ListNode* even = head->next;
        ListNode*deven = even;
        
        while( odd->next != NULL && odd->next->next != NULL){
            odd->next = even->next;
            odd = even->next;
            even->next = odd->next;
            
            even = odd->next;
        }
        odd->next = deven;
        return head;

    }
};