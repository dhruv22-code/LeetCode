/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL)return true;
        if(abs(maxDepth(root->left) - maxDepth(root->right)) <= 1) return isBalanced(root->left) && isBalanced(root->right);
        else return false;
       


    }

int maxDepth(struct TreeNode* root) {
    if(root == NULL){
        return 0;
    }
    int left = maxDepth(root->left);
    int right =maxDepth(root->right);
    int ans = (left>right)?left+1:right+1;
    return ans;
}
};