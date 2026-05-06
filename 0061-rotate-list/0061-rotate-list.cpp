class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL) return head;

        ListNode* temp = head;
        int cnt = 0;

        while(temp != NULL){
            temp = temp->next;
            cnt++;
        }

        k = k % cnt;

        if(k == 0) return head;

        k = cnt - k;

        temp = head;
        int i = 1;

        while(i < k){
            temp = temp->next;
            i++;
        }

        ListNode* temp1 = temp->next;

        temp->next = NULL;

        temp = temp1;

        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = head;

        return temp1;
    }
};