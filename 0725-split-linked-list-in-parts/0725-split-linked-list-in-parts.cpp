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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       

        vector<ListNode*> ans;
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        int part = count/k;
        int rem = count % k;
        vector<int>parts(k, part);
        
        for(int i = 0 ;  i < rem; i++){
            parts[i]++;
            
        }
        temp = head;
        int i = 0;
        for (int i = 0; i < k; i++) {
            ans.push_back(temp); 
            if (temp == nullptr) continue; 

            int currentPartSize = parts[i];
            for (int j = 1; j < currentPartSize; j++) {
                temp = temp->next;  
            }

           
            ListNode* prev = temp;
            temp = temp->next;
            prev->next = NULL;
        }

        return ans;
        
    }
};