class Solution {
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        if (!root) return false; 
        return check(root, head, head) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }

    bool check(TreeNode* root1, ListNode* head1, ListNode* head) {
        if (head1 == nullptr) return true; 
        if (root1 == nullptr) return false; 
        if (root1->val != head1->val) return false; 

       
        return check(root1->left, head1->next, head) || check(root1->right, head1->next, head);
    }
};