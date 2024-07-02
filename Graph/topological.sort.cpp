#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[], int u, vector<bool> &vis, stack<int> &s)
{
    vis[u] = true;

    // phle mere baccho ko dalo fir mujhe dalo
    for (auto &v : adj[u])
    {
        if (!vis[v])
        {
            dfs(adj, v, vis, s);
        }
        s.push(u);
    }
}
vector<int> topoSort(int nodes, vector<int> adj[])
{
    stack<int> s;
    vector<int> result;
    vector<bool> vis(nodes, false);
    for (int i = 0; i < nodes; i++)
    {
        if (!vis[i])
        {
            dfs(adj, i, vis, s);
        }
    }

    while (!s.empty())
    {
        result.push_back(s.top());
        s.pop();
    }
    return result;
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
        adj[u].push_back(v);
    }

    vector<int> ans = topoSort(nodes, adj);

    for (int i = 0; i < nodes; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}