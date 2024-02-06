#include <bits\stdc++.h>
using namespace std;
int search(string pat, string txt)
{
    // code here
    // we will store the count of each letter in map
    unordered_map<char, int> mp;
    for (int i = 0; i < pat.length(); i++)
    {
        mp[pat[i]]++;
    }

    int i = 0, j = 0;
    int count = mp.size();
    int ans = 0;
    while (j < txt.length())
    {

        // calculation part
        if (mp.find(txt[j]) != mp.end())
        {
            mp[txt[j]]--;
            if (mp[txt[j]] == 0)
                count--;
        }

        // if our window size is not equal to pat.length then
        // we have to increment j pointer
        if (j - i + 1 < pat.length())
            j++;

        else if (j - i + 1 == pat.length())
        {
            // find the ans
            if (count == 0)
                ans++;
            if (mp.find(txt[i]) != mp.end())
            {
                mp[txt[i]]++;
                // cout << txt[i] << endl;

                if (mp[txt[i]] == 1)
                {
                    count++;
                }
            }
            i++;
            j++;
        }
    }
    return ans;
}
// int main()
//{

// string ptr = "aaba", txt = "aabaabaa";
// auto ans = search(ptr, txt);
// cout << ans << "\n";

// map<char, int> mp;
// // set<char> s;
// string ptr = "aaba";
// for (int i = 0; i < ptr.length(); i++)
// {
//     mp[ptr[i]]++;
// }
// for (int i = 0; i < ptr.length(); i++)
// {
//     s.insert(ptr[i]);
// }
// cout << mp.size();
// cout << s.size();
// return 0;
//}

bool checkDuplicatesWithinK(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n && j < i + k; j++)
        {
            if (arr[i] == arr[j])
                return true;
        }
    }
    return false;
}

// Driver method to test above method
int main()
{
    int arr[] = {1, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (checkDuplicatesWithinK(arr, n, 3))
        cout << "Yes";
    else
        cout << "No";
}
