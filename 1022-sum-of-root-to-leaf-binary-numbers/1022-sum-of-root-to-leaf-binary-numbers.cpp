class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        string num;
        return deci(root, num);
    }

    int deci(TreeNode* root, string num) {
        if(root == NULL) return 0;

        num += root->val + '0';

        if(!root->left && !root->right) {
            return stoi(num, 0, 2);
        }

        return deci(root->left, num) + 
               deci(root->right, num);
    }
};