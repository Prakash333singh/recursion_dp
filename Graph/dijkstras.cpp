#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int v, vector<vector<int>> adj[], int source)
{
    //   priority_queue< int ,vector<int>,greater<int>>minheap;
    //{dist,node}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> result(v, INT_MAX);

    result[source] = 0;
    // dist,source
    pq.push({0, source});
    while (!pq.empty()) // v times
    {
        int distance = pq.top().first;
        int node = pq.top().second;
        pq.pop(); // log(v)

        // now we will look for the neighbours of node
        for (auto v : adj[node]) // e
        {
            int adjNode = v[0];
            int wt = v[1];

            if (distance + wt < result[adjNode])
            {
                result[adjNode] = distance + wt;
                pq.push({distance + wt, adjNode}); // logv
            }
        }
    }
    return result;
}
// v*(logv+ e.log(v))

// vector<int> dijkstra(int v, vector<vector<int>> adj[], int s)
// {
//     set<pair<int, int>> st;

//     vector<int> result(v, INT_MAX);

//     result[s] = 0;

//     st.insert({0, s});
//     while (!st.empty())
//     {
//         auto it = *st.begin();
//         int d = it.first;
//         int node = it.second;
//         st.erase(it);

//         /// check for all adjcent nodes of the erased check whether the prev dist is larger than current or not
//         for (auto &vec : adj[node])
//         {
//             int adjNode = vec[0];
//             int wt = vec[1];
//             if (d + wt < result[adjNode])
//             {
//                 result[adjNode] = d + wt;
//                 st.insert({d + wt, adjNode});
//             }
//         }
//     }
//     return result;
// }

int main()
{
    int v = 3, e = 3, s = 2;
    vector<vector<int>> adj[v];
    // vector<vector<int>> edges;
    vector<int> v1{1, 1}, v2{2, 6}, v3{2, 3}, v4{0, 1}, v5{1, 3}, v6{0, 6};
    int i = 0;
    adj[0].push_back(v1);
    adj[0].push_back(v2);
    adj[1].push_back(v3);
    adj[1].push_back(v4);
    adj[2].push_back(v5);
    adj[2].push_back(v6);

    vector<int> res = dijkstra(v, adj, s);

    for (int i = 0; i < v; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}