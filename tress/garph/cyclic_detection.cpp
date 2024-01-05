// cycle detection of graph
//->directed
//->undirected
// using dfs
// bfs

#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    bool isCycleDfs(vector<int> adj[], int node, vector<bool> &visited, int parent)
    {
        visited[node] = true;
        for (int &it : adj[node])
        {
            if (it == parent)
                continue;
            if (visited[it])
                return true;

            if (isCycleDfs(adj, it, visited, node))
            {
                return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<int> adj[])
    {
        // Code here
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i] && isCycleDfs(adj, i, vis, -1))
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
    bool ans = obj.isCycle(V, adj);
    if (ans)
        cout << "cycle hai bhai" << endl;
    else
        cout << "no cycle" << endl;

    return 0;
}