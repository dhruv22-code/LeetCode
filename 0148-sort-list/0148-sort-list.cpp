class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* mid = findmid(head);  
        ListNode* mid_1 = mid->next;   
        mid->next = NULL;              
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid_1);
        
        return merge(left, right);
    }

    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode* dummy = new ListNode(-1); 
        ListNode* temp = dummy;
        
    
        while (left != NULL && right != NULL) {
            if (left->val < right->val) {
                temp->next = left;
                left = left->next;
            } else {
                temp->next = right;
                right = right->next;
            }
            temp = temp->next; 
        }
        
        if (left) temp->next = left;
        if (right) temp->next = right;
        
        return dummy->next; 
    }

    ListNode* findmid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow; 
    }
};
