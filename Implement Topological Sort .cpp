class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	
	void topology(int vertex,vector<int>adj[],stack<int> &s,vector<int> &visited){
	    visited[vertex]=1;
	    for(auto i: adj[vertex])
	    {
	        if(!visited[i]){
	            topology(i,adj,s,visited);
	        }
	    }
	    s.push(vertex);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int>s;
	    vector<int>visited(V,0);
	    for(int i=0;i<V;i++){
	        if(!visited[i]){
	            topology(0,adj,s,visited);
	        }
	    }
	    vector<int>ans;
	    
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};