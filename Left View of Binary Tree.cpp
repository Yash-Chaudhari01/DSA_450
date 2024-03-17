

/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){}
};
 */

//Function to return a list containing elements of left view of the binary tree.
void solve(Node *root,int level, vector<int>&ans)
{
    if(root == NULL){
        return ;
    }
    if(ans.size() == level){
        ans.push_back(root->data);
    }
    solve(root->left ,level+1,ans);
    solve(root->right,level+1,ans);
}

vector<int> leftView(Node *root)
{
   // Your code her
   vector<int>ans;
   solve(root,0,ans);
   return ans;
}