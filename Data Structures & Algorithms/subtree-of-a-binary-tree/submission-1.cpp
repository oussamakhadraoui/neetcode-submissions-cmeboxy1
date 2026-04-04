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
    bool dfs(TreeNode* root, TreeNode* sub){
        if(!root&&!sub)return true;
        if(!root||!sub)return false;
        if(root->val!=sub->val)return false;
        return dfs(root->left,sub->left)&&dfs(root->right,sub->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* sub) {
        if(!sub)return true;
        if(!root)return false;
        if(dfs(root,sub))return true;
        return isSubtree(root->left,sub)||isSubtree(root->right,sub); 
    }
};
