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
    
    // TIME COMPLEXITY O(n)  SPACE COMPLEXITY( O(N)) // SKEW TREE
    bool isBalanced(TreeNode* root) {
        return dfsheight(root)!= -1;
    }
    
    int dfsheight(TreeNode* root){
        if(root == NULL) return 0;
        
        int lh=dfsheight(root->left);
        if(lh==-1) return -1;
        int rh=dfsheight(root->right);
        
        if(rh==-1) return -1;
        
        if(abs(lh-rh) > 1 ) return -1;
        
        return 1 + max(lh,rh);
    }
};