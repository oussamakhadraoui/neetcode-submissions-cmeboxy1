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
    bool dfs(TreeNode* p, TreeNode* q){
        if(!p&&q||!q&&p)return false;
        if(!q&&!p)return true;
        if(q->val!=p->val)return false;
        bool result =dfs(p->left,q->left)&&dfs(q->right,p->right);
        return result;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return dfs(p,q);
    }
};
