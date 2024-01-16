// #include <bits\stdc++.h>
// using namespace std;

// vector<vector<int>> subsets;

// void generate(vector<int> &subset, int i, vector<int> &nums)
// {

//     // base condition
//     if (i == nums.size())
//     {
//         subsets.push_back(subset);
//         return;
//     }

//     // ith element not in subset
//     generate(subset, i + 1, nums);

//     // ith element in subset
//     subset.push_back(nums[i]);
//     generate(subset, i + 1, nums);
//     subset.pop_back(); /// backtracking step
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }
//     vector<int> subset;
//     generate(subset, 0, nums);
//     for (auto subset : subsets)
//     {
//         for (auto ele : subset)
//         {
//             cout << ele << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// iterative approach

#include <bits\stdc++.h>
using namespace std;

vector<vector<int>> generate_subsets(vector<int> &nums)
{
    vector<vector<int>> ans = {{}};
    for (int num : nums)
    {
        int n = ans.size();
        for (int i = 0; i < n; i++)
        {
            ans.push_back(ans[i]);
            ans.back().push_back(num);
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<vector<int>> ans = generate_subsets(nums);

    cout << "All subsets:\n";

    for (auto subset : ans)
    {
        cout << "{ ";
        for (auto ele : subset)
        {
            cout << ele << " ";
        }
        cout << "}\n";
    }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << "{ ";
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << "}\n";
    // }

    return 0;
}
