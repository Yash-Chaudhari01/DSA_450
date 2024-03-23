class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int>Q;
        vector<int>ans;
        vector<int>isVisited(V,0);
        Q.push(0);
        while(!Q.empty()){
            int front=Q.front();
            ans.push_back(front);
            Q.pop();
            isVisited[front]=1;
            vector<int>temp=adj[front];
            int size=temp.size();
            
            for(int i=0;i<size;i++){
                if(!isVisited[temp[i]]){
                    Q.push(temp[i]);
                    isVisited[temp[i]]=1;
                }
            }
            
        }
        return ans;
    }
};