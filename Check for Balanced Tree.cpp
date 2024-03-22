/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool ans=true;
    int balanced(Node *root){
        if(root == NULL){
            return 0;
        }
        
        int left = balanced(root->left);
        int right=balanced(root->right);
        if(abs(left-right) >1){
            ans=false;
        }
        return max(left,right)+1;
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root == NULL){
            return 1;
        }
        int tem=balanced(root);
        return ans;
    }
};