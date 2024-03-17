/* A binary tree node has data, pointer to left child
   and a pointer to right child 
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

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void rightSide(Node *root,int level,vector<int>&ans){

        if(root == NULL){
        return ;
    }
    
    if(ans.size()<=level){
        ans.push_back(root->data);
    }
    rightSide(root->right,level+1,ans);
    rightSide(root->left,level+1,ans);
    
}
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans;
       rightSide(root,0,ans);
       return ans;
    }
};
