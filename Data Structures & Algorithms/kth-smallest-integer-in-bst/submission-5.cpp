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
    int count;
    int result ;
    int kthSmallest(TreeNode* root, int k) {
        count= k;
        solve(root);
        return result;
    }
    void solve(TreeNode* root){
        if(!root)return ;
        solve(root->left);
        count--;
        if(count==0) {
            result = root->val;
            return ;
        }
        solve(root->right);
    }
};
