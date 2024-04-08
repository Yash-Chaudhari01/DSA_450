class Solution {
  public:
    // Function to detect cycle in a directed graph.
bool DFSUtil(int v, vector<int> adj[], vector<bool>& visited, vector<bool>& recursionStack) {
  visited[v] = true;
  recursionStack[v] = true;

  for (int i : adj[v]) {
    if (!visited[i]) {
      if (DFSUtil(i, adj, visited, recursionStack)) {
        return true;
      }
    } else if (recursionStack[i]) {
      return true; // Back edge found
    }
  }

  recursionStack[v] = false; // Remove from recursion stack after processing
  return false;
}

bool isCyclic(int V, vector<int> adj[]) {
  vector<bool> visited(V, false);
  vector<bool> recursionStack(V, false);

  for (int i = 0; i < V; i++) {
    if (!visited[i]) {
      if (DFSUtil(i, adj, visited, recursionStack)) {
        return true;
      }
    }
  }
  return false;
}

};