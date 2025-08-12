#include <bits\stdc++.h>
using namespace std;

int solve(vector<int> &a, int n, int x)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans = max(a[i + 1] - a[i], 2 * (x - a[n]));
    }

    return ans;
}
int main()
{
    int t;
    cin >> t;
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = solve(a, n, x);
    cout << ans;
    return ans;
}
