#include <bits\stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        int vis[V] = {0};
        vis[0] = 1;
        queue<int> q;

        // because we are starting with the node 0
        q.push(0);

        vector<int> ans;

        while (!q.empty())
        {
            // get the topmost element from the queue
            int node = q.front();
            q.pop();
            ans.push_back(node);

            // traverse for all its neighbours
            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }

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
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution obj;

    vector<int> ans = obj.bfsOfGraph(V, adj);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}