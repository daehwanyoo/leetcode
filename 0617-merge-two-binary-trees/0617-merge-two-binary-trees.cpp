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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        // if root1 and root2 is null, return nullptr
        if (!root1 && !root2)
            return nullptr;
        
        // if root1 is empty, swap the parameter
        if (!root1)
            return mergeTrees(root2, root1);
        
        // if root2 is not empty
        if (root2)
        {
            // root node
            root1->val = root1->val + root2->val;
            // left children nood
            root1->left = mergeTrees(root1->left, root2->left);
            // right children nood
            root1->right = mergeTrees(root1->right, root2->right);
        }
        return root1;
    }
};