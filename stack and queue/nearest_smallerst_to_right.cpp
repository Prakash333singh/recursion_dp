#include <bits\stdc++.h>
using namespace std;
vector<int> next_smaller_right(vector<int> &v, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int found = false;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[i])
            {
                ans.push_back(v[j]);
                found = true;
                break;
            }
        }
        if (!found)
        {
            ans.push_back(-1);
        }
    }
    return ans;

    // stack<int> s;
    // vector<int> ans;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (s.size() == 0)
    //     {
    //         ans.push_back(-1);
    //     }
    //     else if (s.size() > 0 && s.top() < v[i])
    //     {
    //         ans.push_back(s.top());
    //     }
    //     else if (s.size() > 0 && s.top() >= v[i])
    //     {
    //         while (s.size() > 0 && s.top() >= v[i])
    //         {
    //             s.pop();
    //         }
    //         if (s.size() == 0)
    //             ans.push_back(-1);
    //         else
    //             ans.push_back(s.top());
    //     }
    //     s.push(v[i]);
    // }
    // reverse(ans.begin(), ans.end());
    // return ans;
}
int main()
{
    vector<int> v = {4, 5, 2, 0};
    int n = 4;
    vector<int> ans = next_smaller_right(v, n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}