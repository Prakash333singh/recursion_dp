/// detecting cycle in directed graph using khans algo (topological sort)
// if cycle is there so there is no possible toposort is present

#include <bits\stdc++.h>
using namespace std;
vector<int> toposort(int N, vector<int> adj[])
{
    queue<int> q;
    vector<int> indegree(N, 0);

    // step 1 calculating the indegree of each vertex
    for (int u = 0; u < N; u++)
    {
        for (auto &v : adj[u])
        {
            indegree[v]++;
        }
    }

    // step 2 fill queue with nodes having indegree 0
    for (int i = 0; i < N; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    /// simple bfs
    vector<int> result; // for storing linear order
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        result.push_back(curr);

        // now we look for its neighbour nodes
        for (int &v : adj[curr])
        {
            indegree[v]--;

            if (indegree[v] == 0)
                q.push(v);
        }
    }

    return result;
}
int main()
{
    int V, E;
    cin >> V >> E;
    vector<int> adj[V + 1];
    for (int i = 0; i < V; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> ans = toposort(V, adj);

    for (int i = 0; i < N; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}

// tc 0(V+E) + 0(V)
// sc 0(2N)~ 0(N)