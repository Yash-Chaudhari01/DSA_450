

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


vector<int> diagonal(Node *root)
{
   // your code here
   
   vector<int>ans;
   queue<Node *>q;
   q.push(root);
   if(root == NULL){
       return ans;
   }
   while(!q.empty()){
       Node *front=q.front();
       q.pop();
       while(front != NULL){
      if(front->left != NULL){
           q.push(front->left);
       }
       ans.push_back(front->data);
       front =front->right;
       }

   }
         return ans; 

}