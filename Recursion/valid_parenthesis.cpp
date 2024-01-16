#include <bits\stdc++.h>
using namespace std;

void solve(vector<string> &ans, string s, int close, int open)
{
    // Base case: if both open and close are zero, we've formed a valid combination
    if (open == 0 && close == 0)
    {
        ans.push_back(s);
        return;
    }
    // n=3

    // Recursive case 1: add an open parenthesis if there are remaining open parentheses
    if (open > 0)
    {
        solve(ans, s + "(", close, open - 1);

        cout << s << endl;
    }

    // Recursive case 2: add a close parenthesis if there are remaining close parentheses
    // and the number of open parentheses is less than or equal to the number of close parentheses
    if (close > 0 && open < close)
    {
        solve(ans, s + ")", close - 1, open);
        cout << s << endl;
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> ans;  // Vector to store the generated combinations
    string s = "";       // Current combination being formed
    solve(ans, s, n, n); // Call the helper function to generate combinations
    return ans;          // Return the final vector of combinations
}

int main()
{
    int n = 3; // Example: generate combinations for n=3
    vector<string> result = generateParenthesis(n);

    // Print the generated combinations
    for (const auto &str : result)
    {
        cout << str << endl;
    }

    return 0;
}
