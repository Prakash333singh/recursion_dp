
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &ans)
    {
        vis[node] = 1;
        ans.push_back(node);
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, adj, vis, ans);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        int vis[V] = {0};
        vector<int> ans;
        int start = 0;
        dfs(start, adj, vis, ans);
        return ans;
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

    vector<int> ans = obj.dfsOfGraph(V, adj);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
// i/p
// 5 4
//  0 2
//  2 4
//  0 1
//  0 3
// o/p -> 0 2 4 3 1.

// #include <bits\stdc++.h>
// using namespace std;
// const int N = 1e3 + 10;

// vector<int> adj[N];
// bool vis[N];
// void dfs(int vertex)
// {

//     // take action on vertex after entering the vertex
//     if (vis[vertex])
//         return;
//     cout << vertex << " ";
//     vis[vertex] = true;

//     for (int child : adj[vertex])
//     {
//         cout << "parent" << vertex << ",child" << child << endl;
//         // take action on child before entering the child node
//         dfs(child);
//         // take action on child after exiting child node
//     }
//     // take action on vertex before exiting the vertex
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int v1, v2;
//         cin >> v1 >> v2;
//         adj[v1].push_back(v2);
//         adj[v2].push_back(v1);
//     }
//     int vertex;
//     cin >> vertex;
//     dfs(vertex);
// }