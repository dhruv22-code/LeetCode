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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            
                prev = temp;
                temp = temp -> next;
                
        
            if(temp != NULL){
                ListNode* node = (ListNode *)malloc(sizeof(ListNode));
                node->val = __gcd(prev->val, temp->val);
                prev->next = node;
                node->next = temp;
            }else if(temp == NULL)break;
        }
        return head;
    }
};