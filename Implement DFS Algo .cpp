class Solution {
  public:
    //Function to return a list containing the DFS traversal of the graph.
    void DFS(int v,vector<int>adj[],vector<int>&isVisited,vector<int>&ans){
        
        ans.push_back(v);
        isVisited[v]=1;
        vector<int>temp=adj[v];
        int size=temp.size();
        for(int i=0;i<size;i++){
            if(!isVisited[temp[i]]){
                DFS(temp[i],adj,isVisited,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>isVisited(V,0);
        vector<int>ans;
        DFS(0,adj,isVisited,ans);
        return ans;
    }
 

};