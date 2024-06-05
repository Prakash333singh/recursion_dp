// cycle detection of graph
//->directed
//->undirected
// using dfs
// bfs

// case 1 undirected graph +dfs

#include <bits\stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     bool isCycleDfs(vector<int> adj[], int node, vector<bool> &visited, int parent)
//     {
//         visited[node] = true;
//         for (int &it : adj[node])
//         {
//             // skip kardo wapas usi node pe nhi jana
//             if (it == parent)
//                 continue;
//             if (visited[it])
//                 return true;

//             if (isCycleDfs(adj, it, visited, node))
//             {
//                 return true;
//             }
//         }

//         // agar koi particular node vis hai aur wo usko parent nhi hai matlab cycle
//         // let suppose 4 ka parent 3 hai then we go from 4 to 1 but 1 is already mark visited then cycle is detected
//         return false;
//     }

//     bool isCycleBfs(vector<int> adj[], int u, vector<bool> &visited, int parent)
//     {
//         queue<pair<int, int>> q;
//         // node ,parent

//         q.push({u, parent});
//         visited[u] = true;

//         while (!q.empty())
//         {
//             pair<int, int> p = q.front();
//             q.pop();
//             int source = p.first;
//             int parent = p.second;

//             for (int &v : adj[source])
//             {
//                 if (visited[v] == false)
//                 {
//                     visited[v] = true;
//                     q.push({v, source});
//                 }
//                 else if (v != parent)
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }

//     bool isCycle(int V, vector<int> adj[])
//     {
//         // Code here
//         vector<bool> vis(V, false);
//         for (int i = 0; i < V; i++)
//         {
//             // if (!vis[i] && isCycleDfs(adj, i, vis, -1))
//             // {
//             //     return true;
//             // }
//             if (!vis[i] && isCycleBfs(adj, i, vis, -1))
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// };
// int main()
// {
//     int V, E;
//     cin >> V >> E;
//     vector<int> adj[V];
//     for (int i = 0; i < E; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     Solution obj;
//     bool ans = obj.isCycle(V, adj);
//     if (ans)
//         cout << "cycle hai bhai" << endl;
//     else
//         cout << "no cycle" << endl;

//     return 0;
// }

// cycle detection using dfs in directed graph
// inrecursion wala concept
// if i got a node in curent recursion which is visited then definity there will be cycle

bool isCycleDfs(vector<int> adj[], int u, vector<bool> &vis, vector<bool> &inRecursion)
{
    vis[u] = true;
    inRecursion[u] = true;
    for (int &v : adj[u])
    {
        if (vis[v] == false && isCycleDfs(adj, v, vis, inRecursion))
        {
            return true;
        }
        else if (inRecursion[v] == true)
        {
            return true;
        }
    }
    inRecursion[u] = false;
    return false;
}
bool isCycle(int V, vector<int> adj[])
{
    // Code here
    vector<bool> vis(V, false);
    vector<bool> inRecursion(V, false);
    for (int i = 0; i < V; i++)
    {
        if (!vis[i] && isCycleDfs(adj, i, vis, inRecursion))
        {
            return true;
        }
    }
    return false;
}