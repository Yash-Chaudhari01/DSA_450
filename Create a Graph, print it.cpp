#include <iostream>
#include <queue>
#include <map>
#include <list>
using namespace std;

class Graph
{
public:
    map<int, list<int>> adjList;
    map<int, bool> isVisited;
    map<int, bool> isVisitedDFS;
   vector<int>dfsAns;
    int edge;
    int vertex;
    Graph(int ed, int ver)
    {
        edge = ed;
        vertex = ver;
    }
    void addEdge(int u, int v, bool direction)
    {
        adjList[u].push_back(v);
        if (!direction)
        {
            adjList[v].push_back(u);
        }
    }
    void fromEdge()
    {

        for (int i = 0; i < edge; i++)
        {
            int u, v;
            cout << "Enter values" << endl;
            cin >> u >> v;
            addEdge(u, v, 0);
        }
    }

    void Print()
    {
        for (auto i : adjList)
        {
            cout << i.first << " "
                 << "-> ";

            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    vector<int> Bfs(int starting)
    {
        queue<int> Q;
        vector<int> ans;
        Q.push(starting);
        while (!Q.empty())
        {
            int front = Q.front();
            ans.push_back(front);
            Q.pop();

            isVisited[front] = true;

            for (auto i : adjList[front])
            {
                if (!isVisited[i])
                {
                    Q.push(i);
                    isVisited[i] = true;
                }
            }
        }
        return ans;
    }

    void DFS(int data){
       dfsAns.push_back(data);
       isVisitedDFS[data]=true;
       for(auto i :adjList[data]){
        if(!isVisitedDFS[i]){
          DFS(i);
        }
       }
    }

    void PrintDFS(){
        cout<<endl<<"DFS Traversal "<<endl;
        for(int i=0;i<dfsAns.size();i++){
            cout<<dfsAns[i]<<" ";
        }
    }
};

int main()
{

    Graph g(9, 6);
    g.fromEdge();
    g.Print();
    cout << endl;
    vector<int> ans = g.Bfs(1);
    cout<<endl<<"BFS Traversal "<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    g.DFS(1);
    g.PrintDFS();
      
    return 0;
}