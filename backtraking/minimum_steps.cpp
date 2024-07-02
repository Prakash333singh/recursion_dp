#include <bits\stdc++.h>
using namespace std;

int countSteps(int n, vector<int> &dp)
{
    if (n == 1)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    int opt1 = countSteps(n - 1, dp);

    int ministeps = opt1;

    if (n % 2 == 0)
    {

        int op2 = countSteps(n / 2, dp);
        if (op2 < ministeps)
        {
            ministeps = op2;
        }
    }
    if (n % 3 == 0)
    {
        int op3 = countSteps(n / 3, dp);
        if (op3 < ministeps)
        {
            ministeps = op3;
        }
    }
    dp[n] = 1 + ministeps;
    return dp[n];
}

int countStepsdp(int n, vector<int> &dp)
{
    dp[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        int min = dp[i - 1];
        if (i % 3 == 0)
        {
            if (min > dp[i / 3])
                min = dp[i / 3];
        }
        if (i % 2 == 0)
        {
            if (min > dp[i / 2])
                min = dp[i / 2];
        }
        dp[i] = 1 + min;
    }

    return dp[n];
}
int main()
{
    int n = 10;
    vector<int> dp(n + 1, -1);
    // int ans = countSteps(n, dp);
    int ans = countStepsdp(n, dp);
    cout << ans << endl;
}