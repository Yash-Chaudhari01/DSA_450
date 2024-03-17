class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      Node *root = node;
      vector<int>ans;
      queue<Node*>q;
      q.push(node);
      while(!q.empty()){
         Node *current =q.front();
         ans.push_back(current->data);
               q.pop();
  
         if(current->left){
             q.push(current->left);
         }
         
         if(current->right){
             q.push(current->right);
         }
      }
      return ans;
    }
};