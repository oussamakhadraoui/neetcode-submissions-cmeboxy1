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
    int goodNodes(TreeNode* root) {
        return solve( root,INT_MIN);
    }
    int solve(TreeNode* root,int maxi){
        if(!root)return 0;
        int result=0;
        if(root->val>=maxi){
            maxi=root->val;
            result++;
        }
         
        return result+solve(root->left,maxi)+solve(root->right,maxi);
    }
};
