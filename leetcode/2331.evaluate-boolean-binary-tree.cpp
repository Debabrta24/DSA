/*
 * @lc app=leetcode id=2331 lang=cpp
 *
 * [2331] Evaluate Boolean Binary Tree
 */

// @lc code=start
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
    bool evaluateTree(TreeNode* root) {
        if(root->left ==NULL && root->right==NULL){
            return root->val;
        }
          int a = evaluateTree(root->left);
          int b = evaluateTree(root->right);
          if(root->val==2){
            return a|b;
          }
          return a&b;
    }
};
// @lc code=end

