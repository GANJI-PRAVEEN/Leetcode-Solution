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
    bool isLeaf(TreeNode* root){
        if(root->left==NULL and root->right==NULL)return true;
        return false;
    }
    bool solve(TreeNode* root){
        if(isLeaf(root)){
            return root->val;
        }
        bool left=solve(root->left);
        bool right=solve(root->right);
        if(root->val==3){
            return left and right;
        }
        return left or right;
    }
    bool evaluateTree(TreeNode* root) {
        return solve(root);
    }
};