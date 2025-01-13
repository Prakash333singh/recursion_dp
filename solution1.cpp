// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     long long findMaxXORSum(vector<int> &A)
//     {
//         int N = A.size();

//         // First calculate initial sum
//         long long initialSum = 0;
//         for (int x : A)
//         {
//             initialSum += x;
//         }

//         long long maxSum = initialSum; // Keep track of maximum sum found

//         // Try XORing with each number in the array
//         for (int x : A)
//         {
//             long long currentSum = 0;
//             for (int num : A)
//             {
//                 currentSum += (num ^ x); // XOR each number with x
//             }
//             maxSum = max(maxSum, currentSum);
//         }

//         return maxSum;
//     }
// };

// // Test cases
// int main()
// {
//     Solution sol;

//     // Test Case 1: [1,2,3,4,5]
//     vector<int> A1 = {1, 2, 3, 4, 5};
//     cout << "Test Case 1 Output: " << sol.findMaxXORSum(A1) << endl; // Expected: 19

//     // Test Case 2: [10,10,10,10,10]
//     vector<int> A2 = {3, 1, 4, 1, 5};
//     cout << "Test Case 2 Output: " << sol.findMaxXORSum(A2) << endl; // Expected: 50

//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool canSortBySetBits(vector<int> &nums)
{
    // Step 1: Group numbers by their set bit counts
    unordered_map<int, vector<int>> groups;
    for (int num : nums)
    {
        int setBits = __builtin_popcount(num); // Count set bits in binary representation
        groups[setBits].push_back(num);
    }

    // Step 2: Sort each group individually
    for (auto &pair : groups)
    {
        sort(pair.second.begin(), pair.second.end());
    }

    // Step 3: Reconstruct sorted version of the array
    vector<int> sortedNums;
    for (int num : nums)
    {
        int setBits = __builtin_popcount(num);
        sortedNums.push_back(groups[setBits].front());
        // cout << groups[setBits].front() << " ";
        groups[setBits].erase(groups[setBits].begin()); // Remove the used element
        // cout << groups[setBits].begin() << " ";
    }

    // Step 4: Check if reconstructed sorted array matches the fully sorted array
    vector<int> expectedSortedNums = nums;
    sort(expectedSortedNums.begin(), expectedSortedNums.end());

    for (int i = 0; i < sortedNums.size(); i++)
    {
        cout << sortedNums[i] << " ";
    }

    return sortedNums == expectedSortedNums;
}

int main()
{
    vector<int> nums = {8, 4, 2, 30, 15};

    if (canSortBySetBits(nums))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}
