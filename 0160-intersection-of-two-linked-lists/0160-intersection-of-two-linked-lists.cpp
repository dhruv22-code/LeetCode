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
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        int count1 =1, count2 = 1;
        ListNode* temp1 = headA, *temp2 = headB;
        while(temp1 -> next != NULL){
            temp1 = temp1->next;
            count1++;
        }
        while(temp2 ->next != NULL){
            temp2 = temp2->next;
            count2++;
        }
        if(temp1 != temp2)return NULL;
        temp1 = headA, temp2 = headB;
        if(count2 >= count1){
            int rem = count2- count1;
            while(rem >0){
                temp2 = temp2->next;
                rem--;
            }
            while(temp1 != temp2){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            return temp1;
        }
        else if(count1 > count2){
            int rem = count1- count2;
            while(rem >0){
                temp1 = temp1->next;
                rem--;
            }
            while(temp1 != temp2){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            return temp1;
        }
        return NULL;
    }
};