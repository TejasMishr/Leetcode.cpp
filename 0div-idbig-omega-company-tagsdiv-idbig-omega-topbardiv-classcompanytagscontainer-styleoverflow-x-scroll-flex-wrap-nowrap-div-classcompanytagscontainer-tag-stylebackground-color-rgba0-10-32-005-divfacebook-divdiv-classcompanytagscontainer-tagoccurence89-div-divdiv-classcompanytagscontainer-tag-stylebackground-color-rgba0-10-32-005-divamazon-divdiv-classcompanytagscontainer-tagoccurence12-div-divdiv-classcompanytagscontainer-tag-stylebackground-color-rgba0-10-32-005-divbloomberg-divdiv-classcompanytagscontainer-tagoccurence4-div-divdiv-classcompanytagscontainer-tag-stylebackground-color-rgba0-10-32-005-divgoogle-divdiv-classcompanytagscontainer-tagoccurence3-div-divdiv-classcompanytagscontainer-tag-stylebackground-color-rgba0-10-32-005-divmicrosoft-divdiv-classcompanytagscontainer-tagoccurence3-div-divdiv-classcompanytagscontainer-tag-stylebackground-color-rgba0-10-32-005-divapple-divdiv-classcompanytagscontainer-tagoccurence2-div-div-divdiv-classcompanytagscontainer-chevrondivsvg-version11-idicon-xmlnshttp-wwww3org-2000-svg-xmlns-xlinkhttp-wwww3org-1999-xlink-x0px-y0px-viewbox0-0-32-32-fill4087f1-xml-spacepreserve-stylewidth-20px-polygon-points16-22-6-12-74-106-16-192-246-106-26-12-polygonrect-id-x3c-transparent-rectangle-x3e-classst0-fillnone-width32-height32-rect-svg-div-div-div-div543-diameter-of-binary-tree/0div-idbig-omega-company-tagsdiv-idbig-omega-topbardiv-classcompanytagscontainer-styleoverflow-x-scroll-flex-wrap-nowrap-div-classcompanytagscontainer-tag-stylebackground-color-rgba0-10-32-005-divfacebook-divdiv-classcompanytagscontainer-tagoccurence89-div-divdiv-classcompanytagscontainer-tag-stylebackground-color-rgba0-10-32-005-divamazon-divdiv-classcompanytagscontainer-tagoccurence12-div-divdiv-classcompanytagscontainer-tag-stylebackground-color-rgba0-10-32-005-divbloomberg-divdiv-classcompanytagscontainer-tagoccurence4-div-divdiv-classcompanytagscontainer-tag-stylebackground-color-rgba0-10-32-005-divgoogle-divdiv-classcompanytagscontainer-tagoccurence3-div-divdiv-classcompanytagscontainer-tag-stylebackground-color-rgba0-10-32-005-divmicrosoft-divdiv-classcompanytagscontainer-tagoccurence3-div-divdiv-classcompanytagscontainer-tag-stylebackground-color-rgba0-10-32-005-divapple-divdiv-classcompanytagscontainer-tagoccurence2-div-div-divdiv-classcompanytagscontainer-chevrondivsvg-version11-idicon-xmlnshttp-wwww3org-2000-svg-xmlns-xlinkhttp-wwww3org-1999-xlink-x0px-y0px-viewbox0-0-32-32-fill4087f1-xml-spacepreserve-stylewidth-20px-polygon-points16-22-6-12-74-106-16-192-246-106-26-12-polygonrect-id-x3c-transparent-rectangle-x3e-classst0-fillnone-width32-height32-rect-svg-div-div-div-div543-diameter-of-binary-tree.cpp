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
    
    int find(TreeNode* root, int &maxi){
        if(root==NULL) return 0;
        
        int lh=find(root->left,maxi);
        int rh=find(root->right,maxi);
        
        maxi= max(lh+rh,maxi);
        
        return max(lh,rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // ITERATIVE METHOD
        int maxi=0;
        find(root, maxi);
        return maxi;
    }
};