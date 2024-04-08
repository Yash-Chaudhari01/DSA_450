class Solution {
  public:
    // Function to detect cycle in an undirected graph.


bool DFS(int vertex, vector<int>& isVisited, vector<int> adj[], vector<int> &DFSS) {
    isVisited[vertex] = 1;
    DFSS[vertex] = 1;
    for (auto i : adj[vertex]) {
        if (!isVisited[i]) {
            bool response =DFS(i,isVisited, adj, DFSS);
            if (response) {
                return true;
            }
        } else if (!DFSS[i]) { 
            return true;
        }
    }
    DFSS[vertex] = 0;
    return false;
}

bool isCycle(int V, vector<int> adj[]) {
    vector<int> isVisited(V, 0);
    vector<int> DFSS(V, 0);
    for (int i = 0; i < V; i++) {
        if (!isVisited[i]) {
            bool response =DFS(i,isVisited, adj, DFSS);
            if (response) {
                return true;
            }
        }
    }
    return false;
}

};