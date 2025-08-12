#include <bits\stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> arr, int sum)
{
    int n = arr.size();
    bool t[n + 1][sum + 1];

    // Initialize the dp table
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
                t[i][j] = false; // If there are no elements, we can't form any sum except 0
            if (j == 0)
                t[i][j] = true; // Sum 0 can always be formed with 0 elements
        }
    }

    // Fill the dp table
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }

    return t[n][sum];
}

int main()
{
    vector<int> arr{2, 3, 7, 8, 10};

    int sum = 1;
    bool ans = isSubsetSum(arr, sum);
    if (ans)
        cout << "subset is possible " << endl;
    else
        cout << "aukaat mai" << endl;
}