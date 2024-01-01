#include <bits\stdc++.h>
using namespace std;
const int N = 1e3 + 10;

vector<int> adj[N];
bool vis[N];
void dfs(int vertex)
{

    // take action on vertex after entering the vertex
    if (vis[vertex])
        return;
    // cout << vertex << " ";
    vis[vertex] = true;

    for (int child : adj[vertex])
    {
        // cout << "parent" << vertex << ",child" << child << endl;
        //  take action on child before entering the child node
        dfs(child);
        // take action on child after exiting child node
    }
    // take action on vertex before exiting the vertex
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ct = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        dfs(i);
        ct++;
    }
    cout << ct << endl;
    return 0;
}