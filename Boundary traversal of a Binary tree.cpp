/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
    
    void Left(Node *root ,vector<int> &ans){
        if((root == NULL)||(root->left == NULL && root ->right == NULL)){
            return ;
        }
        ans.push_back(root->data);
        if(root->left){
            Left(root->left,ans);
        }else{
            Left(root->right,ans);
        }

    }
    
    void Right(Node *root ,vector<int> &ans){
        if((root == NULL)||(root->left == NULL && root ->right == NULL)){
            return ;
        }
        if(root->right){
              Right(root->right,ans);
        }else{
            Right(root->left,ans);
        }
       ans.push_back(root->data);
    }
    void Leaf(Node *root ,vector<int> &ans){
        if(root == NULL){
            return ;
        }
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
        }
        Leaf(root->left,ans);
        Leaf(root->right,ans);
    }
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(root== NULL){
            return ans ;
        }
        
        ans.push_back(root->data);
        //left part
        Left(root->left, ans);
        //leaf
        Leaf(root->left,ans);
        Leaf(root->right,ans);
        
        //right
        Right(root->right,ans);
        return ans;
    }
};