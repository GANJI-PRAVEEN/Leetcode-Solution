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
public:
    TreeNode* solve(TreeNode*root,TreeNode* p,TreeNode* q){
        if(!root or p==root or root==q)return root;
        TreeNode* l=solve(root->left,p,q);
        TreeNode* r=solve(root->right,p,q);
        if(l and r)return root;
        if(l)return l;
        return r;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return solve(root,p,q);
    }
};