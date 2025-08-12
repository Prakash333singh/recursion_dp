#include <bits\stdc++.h>
using namespace std;

// there are 2 algo for finding scc
//  1.kosarajus algo
//  2.torjan

// 1.kosarajus algo take 3 steps

// step 1. store the order of dfs in stack(topo sort)
// step2 .reverse the edges of the graph
// step3 .get the of count of scc and call the dfs in stack order
void dfs(int node, vector<int> adj[], vector<int> &vis)
{
    vis[node] = 1;

    for (auto it : adj[node])
    {
        if (!vis[it])
            dfs(it, adj, vis);
    }
}

void dfsFill(int node, vector<int> adj[], vector<int> &vis, stack<int> &s)
{
    vis[node] = 1;

    for (auto it : adj[node])
    {
        if (!vis[it])
            dfsFill(it, adj, vis, s);
    }

    s.push(node);
}

int karajus(int V, vector<int> adj[])
{
    stack<int> s;
    vector<int> vis(V, 0);

    // step 1. store the order of dfs in stack(topo sort)
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
            dfsFill(i, adj, vis, s);
    }

    // step 3 reverse the order of the edge
    vector<int> adjreverse[V + 1];
    for (int u = 0; u < V; u++)
    {
        for (auto it : adj[u])
        {
            adjreverse[it].push_back(u);
        }
    }

    // step3 call the dfs in stack oreder
    int count = 0;
    vis = vector<int>(V, 0);
    while (!s.empty())
    {
        int node = s.top();
        s.pop();
        if (!vis[node])
        {
            count++;
            dfs(node, adjreverse, vis);
        }
    }
    return count;
}

int main()
{
    int n = 5;
    int edges[5][2] = {
        {1, 0}, {0, 2}, {2, 1}, {0, 3}, {3, 4}};
    vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
    }

    int ans = karajus(n, adj);
    cout << "The number of strongly connected components is: " << ans << endl;
    return 0;
}

// tc.->0(v+e)
// sc.->0(v+e)
