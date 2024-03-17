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

 vector<int>vec;
 void pre(TreeNode* root){
     if(root==NULL){
         return ;
     }
      vec.push_back(root->val);
     pre(root->left);
    pre(root->right);
    
 }  


public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        pre(root);
        return vec;
    }
};