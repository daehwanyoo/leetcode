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
    // declare int ans
    int ans=0;

public:
    int rangeSumBST(TreeNode* root, int low, int high) {

        // if root is bigger than low and smaller than high
        if(root->val >=low && root->val <=high)
        {
            // add up to ans
            ans+=root->val;
        }

        // recursive: left
        if (root->left!=NULL)
        {
        rangeSumBST(root->left, low, high);
        }

        // recursive: right
        if(root->right!=NULL)
        {
        rangeSumBST(root->right, low, high);
        }
        
        // return ans
        return ans;
    }
};