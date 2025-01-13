#include <bits\stdc++.h>
using namespace std;
// const int N = 1e3 + 10;
// int graph[N][N];
// int main()
// {
//     int vertex, edge;
//     cin >> vertex >> edge;
//     for (int i = 0; i < edge; i++)
//     {
//         int v1, v2;
//         cin >> v1 >> v2;
//         graph[v1][v2] = 1;
//         graph[v2][v1] = 1;
//     }
//     return 0;
// }
// complexity->0(N^2) because we are maintaining the n*n matrix
// where n is the no of vertex of the graph

// adjcency list
// const int N = 1e3 + 10;
// int graph[N][N];
// vector<pair<int, int>> adj[N];
// int main()
// {
//     int vertex, edges;
//     cin >> vertex >> edges;
//     for (int i = 0; i < edges; i++)
//     {
//         int v1, v2, weight;
//         cin >> v1 >> v2 >> weight;
//         graph[v1][v2] = weight;
//         graph[v2][v1] = weight;
//         adj[v1].push_back({v2, weight});
//         adj[v2].push_back({v1, weight});
//     }

//     return 0;
// }
// s.c-> 0 (V+E)

int main()
{

    int v, e;
    cin >> v >> e;
    vector<int> adj[v + 1];
    // vector<pair<int,int>> adj[v + 1]; for weighted graph

    for (int i = 0; i < e; i++)
    {

        // u->v
        // v->u
        int u, v;
        // int u,v.w
        cin >> u >> v;
        // cin >> u >> v>>w;
        // adj[u].push_back({v,w})
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}