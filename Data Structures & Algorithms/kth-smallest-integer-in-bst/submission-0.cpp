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
    int ans;
    int cnt =0;
    int k;
    void dfs(TreeNode* root){
        if(!root)return ;
        dfs(root->left);
        cnt++;
        if(cnt==k){
            ans=root->val;
            return ;
        }
        dfs(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        this->k =k; 
        dfs(root) ;
        return ans;   
    }
};
