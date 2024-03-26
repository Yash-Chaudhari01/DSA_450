/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
    private:
       void leafLevel(Node* root,unordered_set<int> &s,int l){
            if(root==NULL) return;
            if(root->left ==NULL && root->right==NULL) s.insert(l);
            leafLevel(root->left,s,l+1);
            leafLevel(root->right,s,l+1);
        }
    
    public:
    /*You are required to complete this method*/
    
    
        bool check(Node *root)
        {
        //Your code here
        unordered_set<int> s;
        leafLevel(root,s,0);
        return s.size()==1;
        
        }
};