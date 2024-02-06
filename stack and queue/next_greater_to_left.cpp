#include <bits/stdc++.h>
using namespace std;
vector<int> next_greater_left(vector<int> &v, int n)
{

    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        bool found = false;
        for (int j = i - 1; j >= 0; j--)
        {
            if (v[j] > v[i])
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
    reverse(ans.begin(), ans.end());
    return ans;

    // vector<int> ans;
    // stack<int> s;

    // for (int i = 0; i < n; i++)
    // {
    //     if (s.size() == 0)
    //         ans.push_back(-1);

    //     else if (s.size() > 0 && s.top() > v[i])
    //     {
    //         ans.push_back(s.top());
    //     }
    //     else if (s.size() > 0 && s.top() <= v[i])
    //     {
    //         while (s.size() > 0 && s.top() <= v[i])
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

    // return ans;
}
int main()
{
    vector<int> v = {24, 11, 13, 21, 3};
    int n = 5;
    vector<int> ans = next_greater_left(v, n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
