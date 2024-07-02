#include <bits\stdc++.h>
using namespace std;

vector<int> bellman_ford(int V, vector<vector<int>> &edges, int source)
{
    vector<int> ans(V, 1e8);
    ans[source] = 0;

    for (int i = 0; i < V - 1; i++)
    {
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            if (ans[u] != 1e8 && ans[u] + wt < ans[v])
            {
                ans[v] = ans[u] + wt;
            }
        }
    }
    // Nth relaxation to check negative cycle

    for (auto it : edges)
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];
        if (ans[u] != 1e8 && ans[u] + wt < ans[v])
        {
            return {-1};
        }
    }

    return ans;
}

int main()
{

    int V = 6;
    vector<vector<int>> edges(7, vector<int>(3));
    edges[0] = {3, 2, 6};
    edges[1] = {5, 3, 1};
    edges[2] = {0, 1, 5};
    edges[3] = {1, 5, -3};
    edges[4] = {1, 2, -2};
    edges[5] = {3, 4, -2};
    edges[6] = {2, 4, 3};

    int S = 0;
    vector<int> dist = bellman_ford(V, edges, S);
    for (auto d : dist)
    {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}