#include <iostream>
#include <vector>
using namespace std;

void printtargetsum(vector<int> &arr, int idx, string set, int sos, int target)
{
    // Base condition
    if (idx == arr.size())
    {
        if (sos == target)
            cout << set << "->";
        return;
    }

    // Include the current element in the subset
    printtargetsum(arr, idx + 1, set + to_string(arr[idx]) + ",", sos + arr[idx], target);

    // Exclude the current element from the subset
    printtargetsum(arr, idx + 1, set, sos, target);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 9;

    // Start from index 0 with an empty subset and sum 0
    printtargetsum(arr, 0, "", 0, target);

    return 0;
}
