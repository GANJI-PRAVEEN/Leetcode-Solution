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
    TreeNode* construct(vector<int>preorder,vector<int>inorder,int preIn,int preOut,int In,int Out,unordered_map<int,int>&mp){
        if(preIn>preOut or In>Out)return NULL;
        TreeNode* root=new TreeNode(preorder[preIn]);
        int inRoot= mp[root->val];
        int numsLeft = inRoot-In;
        root->left = construct(preorder,inorder,preIn+1,preIn+numsLeft,In,inRoot-1,mp);
        root->right=construct(preorder,inorder,preIn+numsLeft+1,preOut,inRoot+1,Out,mp);
        return root;
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>inorder(preorder.begin(),preorder.end());
        sort(inorder.begin(),inorder.end());
        int n=preorder.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
        return construct(preorder,inorder,0,n-1,0,n-1,mp);
    }
};