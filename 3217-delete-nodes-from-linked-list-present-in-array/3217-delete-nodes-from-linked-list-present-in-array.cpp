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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* prev = NULL, *curr = head;
        set<int>st;
        for(int i = 0 ; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        while(curr != NULL){
            if(prev == NULL && st.find(curr->val) != st.end()){
                curr = curr->next;
                head = curr;

            }
            else if(st.find(curr->val) != st.end()){
                prev->next = curr->next;
                curr->next = NULL;
                curr = prev->next; 
            }else {
                prev = curr;
                curr=curr->next;
            }
        }
        return head;
    }
};