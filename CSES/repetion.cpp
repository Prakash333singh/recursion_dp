#include <bits/stdc++.h>
using namespace std;
int stringLength(string &s)
{
    int maxLength = 0;       // Length of the longest repetition
    char currentChar = '\0'; // Current character being processed
    int currentLength = 0;   // Length of the current repetition

    for (char ch : s)
    {
        if (ch == currentChar)
        {
            // Current character is the same as the previous one
            currentLength++;
        }
        else
        {
            // Current character is different, update repetition information
            currentChar = ch;
            currentLength = 1;
        }

        // Update the maximum length if needed
        maxLength = max(maxLength, currentLength);
    }

    return maxLength;
}
int main()
{
    string s;
    cin >> s;
    int ans = stringLength(s);
    cout << ans;

    return 0;
}