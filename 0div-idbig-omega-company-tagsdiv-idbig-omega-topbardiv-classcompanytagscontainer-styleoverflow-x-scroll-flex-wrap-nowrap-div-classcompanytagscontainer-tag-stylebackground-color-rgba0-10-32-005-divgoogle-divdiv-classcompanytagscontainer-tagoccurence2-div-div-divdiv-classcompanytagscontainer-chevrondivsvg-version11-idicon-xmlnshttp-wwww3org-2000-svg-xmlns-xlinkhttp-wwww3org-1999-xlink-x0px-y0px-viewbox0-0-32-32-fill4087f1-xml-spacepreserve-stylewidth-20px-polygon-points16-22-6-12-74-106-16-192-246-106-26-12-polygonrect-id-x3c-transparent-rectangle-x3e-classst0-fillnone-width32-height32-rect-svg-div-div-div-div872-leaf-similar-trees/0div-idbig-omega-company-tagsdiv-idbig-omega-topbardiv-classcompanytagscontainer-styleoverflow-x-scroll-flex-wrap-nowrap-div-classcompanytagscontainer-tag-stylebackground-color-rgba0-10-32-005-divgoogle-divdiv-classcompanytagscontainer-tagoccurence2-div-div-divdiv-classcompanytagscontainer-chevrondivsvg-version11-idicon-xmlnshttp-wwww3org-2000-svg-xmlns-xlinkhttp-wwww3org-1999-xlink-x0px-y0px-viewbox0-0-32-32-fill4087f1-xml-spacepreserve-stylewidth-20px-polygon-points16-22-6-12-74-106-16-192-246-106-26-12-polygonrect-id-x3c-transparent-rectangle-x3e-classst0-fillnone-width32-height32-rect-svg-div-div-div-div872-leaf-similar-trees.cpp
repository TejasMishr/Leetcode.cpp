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
    vector<int> vec1,vec2;
    void inorder1(TreeNode* root){
        if(root != NULL){
            if(root->left == NULL && root->right== NULL) vec1.push_back(root->val);
            else{
                inorder1(root->left);
                // cout<<root->key<<" ";
                inorder1(root->right);
            }
            
         }
    }
    
    void inorder2(TreeNode* root){
        if(root != NULL){
            if(root->left == NULL && root->right== NULL) vec2.push_back(root->val);
            else{
                inorder2(root->left);
                // cout<<root->key<<" ";
                inorder2(root->right);
            }
            
         }
    }
    
    
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        inorder1(root1);
        inorder2(root2);
        // for(auto x:vec1) cout<<x<<endl;
        return (vec1 == vec2);
    }
};