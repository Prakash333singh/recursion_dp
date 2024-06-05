#include <bits\stdc++.h>
using namespace std;
//  "Disjoint Set Union (DSU)"
// In this video we will understand DSU and it's two basic operations :
// 1) union
// 2) find

int find(int i, vector<int> &parent)
{
    if (i == parent[i])
        return i;
    return find(parent[i], parent);
    // return parent[i]= find(parent[i], parent);
}

void unionSet(int X, int Z, vector<int> &parent)
{
    int x_parent = find(X, parent);
    int y_parent = find(Z, parent);

    if (x_parent != y_parent)
    {
        parent[x_parent] = y_parent;
    }
}

/// by rank
vector<int> Rank;
vector<int> parent;

int find(int x)
{
    if (x == parent[x])
        return x;
    return parent[x] = find(parent[x]);
}

void Union(int x, int y)
{
    int x_parent = find(x);
    int y_parent = find(y);

    if (x_parent == y_parent)
        return;

    if (Rank[x_parent] > Rank[y_parent])
    {
        parent[y_parent] = x_parent;
    }
    else if (Rank[x_parent] < Rank[y_parent])
    {
        parent[x_parent] = y_parent;
    }
    else
    {
        parent[x_parent] = y_parent;
        Rank[y_parent]++;
    }
}

// detect cycle in dsu
int detectCycle(int V, vector<int> adj[])
{
    parent.resize(V);
    Rank.resize(V, 0);

    for (int i = 0; i < V; i++)
        parent[i] = i;

    for (int u = 0; u < V; u++)
    {
        for (int &v : adj[u])
        {
            if (u < v)
            {
                if (find(u) == find(v))
                    return true;
                else
                {
                    Union(u, v);
                }
            }
        }
    }
    return false;
}