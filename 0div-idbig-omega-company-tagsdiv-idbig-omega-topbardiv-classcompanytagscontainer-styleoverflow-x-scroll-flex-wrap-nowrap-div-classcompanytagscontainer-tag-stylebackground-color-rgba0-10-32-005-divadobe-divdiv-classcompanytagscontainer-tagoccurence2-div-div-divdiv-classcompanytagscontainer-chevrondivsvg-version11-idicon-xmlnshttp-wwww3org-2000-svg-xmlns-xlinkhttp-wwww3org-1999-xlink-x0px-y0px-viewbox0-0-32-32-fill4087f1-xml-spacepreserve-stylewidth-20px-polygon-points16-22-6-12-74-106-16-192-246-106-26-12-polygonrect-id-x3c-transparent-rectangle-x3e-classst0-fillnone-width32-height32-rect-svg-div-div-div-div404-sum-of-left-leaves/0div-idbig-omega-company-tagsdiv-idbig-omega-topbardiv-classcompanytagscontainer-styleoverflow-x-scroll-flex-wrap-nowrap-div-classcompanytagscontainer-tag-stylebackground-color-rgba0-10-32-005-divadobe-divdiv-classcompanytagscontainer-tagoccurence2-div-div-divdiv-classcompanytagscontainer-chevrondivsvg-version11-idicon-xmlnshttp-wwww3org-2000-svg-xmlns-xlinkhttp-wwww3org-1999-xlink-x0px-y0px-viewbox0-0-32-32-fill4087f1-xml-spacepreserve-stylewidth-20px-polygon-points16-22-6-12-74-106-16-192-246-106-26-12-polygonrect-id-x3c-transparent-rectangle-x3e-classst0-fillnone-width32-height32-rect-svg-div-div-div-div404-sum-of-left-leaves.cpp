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
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root, int l = -1) {
        if(root == NULL)
            return 0;
        if(root->left == NULL && root->right == NULL && l == 0){
            sum += root->val;
        }
        sumOfLeftLeaves(root->left, 0);
        sumOfLeftLeaves(root->right, 1);
        return sum; 
    }
};