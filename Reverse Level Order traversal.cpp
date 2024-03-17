

/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    
    // code here
    queue<Node *>q;
    stack<int>s;
    q.push(root);
    Node* curr=NULL;
    while(!q.empty()){
        curr=q.front();
           s.push(curr->data);
        q.pop();
        if(curr->right){
            q.push(curr->right);
        }
        if(curr->left){
            q.push(curr->left);
        }
        
    }
    vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}