#include <bits\stdc++.h>
using namespace std;
void dfs(int i, vector<int> adj[], vector<bool> &vis)
{
    vis[i] = true;
    for (auto it : adj[i])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis);
        }
    }
}
int findMotherVertex(vector<int> adj[], int nodes)
{
    int possibleMotherVertex;
    vector<bool> vis(nodes, false); // visted array
    for (int i = 0; i < nodes; i++)
    {
        if (!vis[i])
        {
            dfs(i, adj, vis);
            possibleMotherVertex = i;
        }
    }

    /// crosschecking by making another dfs
    for (int i = 0; i < nodes; i++)
        vis[i] = false;

    dfs(possibleMotherVertex, adj, vis);

    for (int i = 0; i < nodes; i++)
    {
        if (!vis[i])
        {
            return -1;
        }
    }

    return possibleMotherVertex;
}
int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    vector<int> adj[nodes + 1];
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // u---->v
        // adj[v].push_back(u); // v--->u
    }
    int mothervertex = findMotherVertex(adj, nodes);
    cout << mothervertex << " ";
    return 0;
}