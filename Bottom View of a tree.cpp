//Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>ans;
        queue<pair<Node*,int>>q;
        map<int,int>mp;
        if(root == NULL){
            return ans;
        }
        
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            pair<Node*,int>temp=q.front();
            int line=temp.second;
            Node* data=temp.first;
            q.pop();
            mp[line]=data->data;
            if(data->left){
                q.push(make_pair(data->left,line-1));
            }
            
            if(data->right){
                q.push(make_pair(data->right,line+1));
            }
            
        }
        
        for(auto  i :mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};