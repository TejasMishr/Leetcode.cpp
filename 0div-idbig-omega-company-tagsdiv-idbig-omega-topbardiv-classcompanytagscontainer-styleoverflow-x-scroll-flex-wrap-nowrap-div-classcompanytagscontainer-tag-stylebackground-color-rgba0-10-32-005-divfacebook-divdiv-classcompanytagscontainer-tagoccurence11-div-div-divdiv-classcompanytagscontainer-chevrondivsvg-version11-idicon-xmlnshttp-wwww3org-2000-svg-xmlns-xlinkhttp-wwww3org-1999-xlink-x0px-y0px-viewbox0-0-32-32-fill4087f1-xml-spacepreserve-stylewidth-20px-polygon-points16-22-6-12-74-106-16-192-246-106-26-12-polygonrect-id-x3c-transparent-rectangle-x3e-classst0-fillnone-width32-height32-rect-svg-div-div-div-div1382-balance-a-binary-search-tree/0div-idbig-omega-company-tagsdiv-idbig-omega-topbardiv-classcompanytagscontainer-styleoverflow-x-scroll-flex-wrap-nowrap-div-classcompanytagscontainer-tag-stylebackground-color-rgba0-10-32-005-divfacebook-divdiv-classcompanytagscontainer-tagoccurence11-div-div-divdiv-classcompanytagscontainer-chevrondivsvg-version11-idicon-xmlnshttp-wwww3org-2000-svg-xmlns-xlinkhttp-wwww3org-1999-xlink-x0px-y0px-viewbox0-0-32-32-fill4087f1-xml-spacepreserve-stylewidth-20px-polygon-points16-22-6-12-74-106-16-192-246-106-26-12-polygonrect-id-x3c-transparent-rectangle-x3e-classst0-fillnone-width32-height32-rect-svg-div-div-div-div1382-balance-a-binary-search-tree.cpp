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
    void trav(TreeNode* root,vector<TreeNode*> &in){
        if(!root) return ;
        trav(root->left,in);
        in.push_back(root);
        trav(root->right,in);
    }
    TreeNode* newbst(vector<TreeNode*> &in,int i,int j){
        if(i>j) return NULL;
        int mid=(i+j)/2;
        TreeNode* temp=in[mid];
        temp->left=newbst(in,i,mid-1);
        temp->right=newbst(in,mid+1,j);
        return temp;
    }
    TreeNode* balanceBST(TreeNode* root) {
    vector<TreeNode*> in;
    trav(root,in);  
    for(auto it:in){
        cout<<it->val<<" ";
    }  
    return newbst(in,0,in.size()-1);
    }
};



