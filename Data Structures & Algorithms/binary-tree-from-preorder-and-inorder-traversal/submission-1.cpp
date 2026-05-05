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
    unordered_map<int,int>rec;
    TreeNode* solve(vector<int>& preorder,int &index,int left,int right){
        if(left>right)return NULL;
        TreeNode * root= new TreeNode(preorder[index]);

        int mid= rec[preorder[index]];
        index++;
        root->left=solve(preorder,index,left,mid-1);

        root->right=solve(preorder,index,mid+1,right);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        for(int i =0;i<n;i++)rec[inorder[i]]=i;
        int index=0;
        return solve(preorder,index,0,n-1);
    }
};
