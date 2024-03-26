/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution
{
    bool ans=true;
    int sum(Node* root){
        // Your code here
        if (root == NULL){
            return 0;
        }
         if(root->left == NULL && root ->right == NULL){
             return root->data;

         } 
         
     int left =sum(root->left);
     int right =sum(root->right);
      
      if(root->data != left +right){
          ans =false;
      }
      return (root->data +left +right);
     
    }
    public:
    bool isSumTree(Node* root)
    {
         if(root == NULL){
             return true;
         }
       
     int left =sum(root);
     


      return ans;
    }
};