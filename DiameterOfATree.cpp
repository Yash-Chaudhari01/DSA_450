/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int ans=0;

    
    int width(Node* root){
        if(root == NULL){
            return 0;
        }
        int left =width(root->left);
        int right =width(root->right);
        
        if(ans<left+right+1){
            ans=left+right+1;
        }
        return max(left,right)+1;
        
    }
    int diameter(Node* root) {
        // Your code here
        if(root == NULL){
            return 0;
        }
        int data=width(root);
        
        return ans;

        
        
    }
};