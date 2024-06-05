#include <bits\stdc++.h>
using namespace std;
int maxFreqsofar = 0;
int currFreq;
int miniOperation(vector<int> &v, int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     currFreq = 1;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (v[j] == v[i] && j != i)
    //         {
    //             currFreq++;
    //         }
    //     }
    //     if (currFreq > maxFreqsofar)
    //     {
    //         maxFreqsofar = currFreq;
    //     }
    // }
    // return n - maxFreqsofar;

    // optimised approach
    unordered_map<int, int> ump;
    for (int i = 0; i < n; i++)
    {
        ump[v[i]]++;
    }
    int maxFreq = 0;
    for (auto x : ump)
    {
        if (x.second > maxFreq)
            maxFreq = x.second;
    }
    return n - maxFreq;
}
int main()
{
    vector<int> v = {1, 2, 3, 4};
    int n = 4;
    int ans = miniOperation(v, n);
    cout << ans;

    return 0;
}