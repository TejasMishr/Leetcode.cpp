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
    
   TreeNode* dfs(TreeNode* root,int t){

    if(root == NULL)return root;
    if(root->left == NULL && root->right == NULL && root->val == t)return NULL;
    if(root->left == NULL && root->right == NULL)return root;

    TreeNode *left = dfs(root->left,t);
    TreeNode *right = dfs(root->right,t);

    if(left == NULL)root->left = NULL;
    if(right == NULL)root->right = NULL;
    if(left == NULL && right == NULL && root->val == t)return NULL;
    
    return root;
}
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root == NULL)return root;
        if(root->left == NULL && root->right == NULL && root->val == target)return NULL;
        if(root->left == NULL && root->right == NULL)return root;

        return dfs(root,target);
    }
};