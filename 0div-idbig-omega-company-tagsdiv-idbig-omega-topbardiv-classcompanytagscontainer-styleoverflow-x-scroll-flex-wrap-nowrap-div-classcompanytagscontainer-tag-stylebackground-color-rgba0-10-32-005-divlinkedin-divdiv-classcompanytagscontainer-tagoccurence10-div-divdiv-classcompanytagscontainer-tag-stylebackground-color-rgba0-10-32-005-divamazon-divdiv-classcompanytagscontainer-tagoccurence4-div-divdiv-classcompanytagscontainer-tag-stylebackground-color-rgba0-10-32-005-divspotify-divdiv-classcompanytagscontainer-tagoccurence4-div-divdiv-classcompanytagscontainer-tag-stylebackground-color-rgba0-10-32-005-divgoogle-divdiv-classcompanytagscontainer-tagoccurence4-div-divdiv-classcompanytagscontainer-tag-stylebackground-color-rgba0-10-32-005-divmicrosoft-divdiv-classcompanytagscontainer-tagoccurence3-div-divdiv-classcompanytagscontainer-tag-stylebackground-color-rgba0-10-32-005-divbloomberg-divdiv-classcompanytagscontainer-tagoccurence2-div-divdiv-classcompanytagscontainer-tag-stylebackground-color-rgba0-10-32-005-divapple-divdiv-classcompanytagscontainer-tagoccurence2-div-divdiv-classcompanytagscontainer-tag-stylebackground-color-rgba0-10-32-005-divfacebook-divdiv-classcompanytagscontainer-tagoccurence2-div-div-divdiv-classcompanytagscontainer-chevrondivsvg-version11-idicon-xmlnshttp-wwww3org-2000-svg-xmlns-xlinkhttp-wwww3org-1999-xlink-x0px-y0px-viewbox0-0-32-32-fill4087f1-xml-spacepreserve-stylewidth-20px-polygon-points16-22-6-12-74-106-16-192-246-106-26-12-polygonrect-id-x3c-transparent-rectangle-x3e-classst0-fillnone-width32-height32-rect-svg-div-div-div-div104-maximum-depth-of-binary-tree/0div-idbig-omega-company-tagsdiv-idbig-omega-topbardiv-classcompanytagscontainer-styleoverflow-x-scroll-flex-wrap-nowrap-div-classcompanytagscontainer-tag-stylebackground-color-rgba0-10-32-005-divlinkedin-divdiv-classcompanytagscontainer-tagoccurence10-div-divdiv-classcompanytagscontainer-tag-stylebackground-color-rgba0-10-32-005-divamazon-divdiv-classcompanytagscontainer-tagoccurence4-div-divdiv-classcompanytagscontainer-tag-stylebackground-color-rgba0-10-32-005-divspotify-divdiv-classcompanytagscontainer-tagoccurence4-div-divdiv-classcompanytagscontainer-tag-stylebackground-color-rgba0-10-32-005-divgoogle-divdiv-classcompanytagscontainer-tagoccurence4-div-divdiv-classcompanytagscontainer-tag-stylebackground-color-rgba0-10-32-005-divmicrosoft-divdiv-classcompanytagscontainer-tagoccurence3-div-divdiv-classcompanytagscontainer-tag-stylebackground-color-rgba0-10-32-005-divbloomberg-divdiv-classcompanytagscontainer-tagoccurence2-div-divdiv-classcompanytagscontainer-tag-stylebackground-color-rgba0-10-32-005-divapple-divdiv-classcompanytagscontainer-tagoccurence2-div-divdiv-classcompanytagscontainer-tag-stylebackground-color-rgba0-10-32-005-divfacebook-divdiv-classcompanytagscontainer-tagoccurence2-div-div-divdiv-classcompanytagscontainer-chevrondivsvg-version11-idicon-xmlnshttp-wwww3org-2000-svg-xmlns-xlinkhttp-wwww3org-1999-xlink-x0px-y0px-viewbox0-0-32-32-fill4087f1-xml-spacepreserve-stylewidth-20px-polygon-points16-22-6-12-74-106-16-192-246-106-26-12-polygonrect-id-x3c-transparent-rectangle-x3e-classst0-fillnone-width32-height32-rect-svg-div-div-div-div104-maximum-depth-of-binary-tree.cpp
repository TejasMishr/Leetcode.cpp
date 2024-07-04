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
    int maxDepth(TreeNode* root) {
        
           return root == NULL ? 0 : max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
        
        
//         if(root == NULL) return 0;
        
//         int lh=maxDepth(root->left);
//         int rh=maxDepth(root->right);
            
        
//         // TIME COMPLEXITY for worst case ( O(n) )
//         // SPACE COMPLEXITY for worst case ( O(n) ) // SKEW TREE
//         return 1 + max(lh,rh);
    }
};