/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    // define treenode ans
    TreeNode*ans;
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        // if original is empty, return nullptr
        if(!original)return nullptr;
        // if original is target, save ans is cloned
        if(original==target){
            ans=cloned;
        }

        // recursive: left
        getTargetCopy(original->left, cloned->left, target);
        // recursive: right
        getTargetCopy(original->right, cloned->right, target);
        return ans;
    }
};