class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root) return nullptr;
        if (root->val < val) return searchBST(root->right, val);
        if (root->val > val) return searchBST(root->left, val);
        return root;
    }
};
