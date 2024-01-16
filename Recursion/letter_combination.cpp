#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    std::vector<std::string> letterCombinations(std::string digits)
    {
        std::vector<std::string> result;
        combination("", digits, 0, result);
        return result;
    }

private:
    static const std::vector<std::string> KEYS;

    void combination(std::string prefix, std::string digits, int offset, std::vector<std::string> &result)
    {
        if (offset >= digits.length())
        {
            result.push_back(prefix);
            // cout << prefix << endl;
            return;
        }
        string letters = KEYS[digits[offset] - '0'];
        cout << letters << endl;

        for (char letter : letters)
        {
            cout << letter << " ";
            combination(prefix + letter, digits, offset + 1, result);
        }
    }
};

const std::vector<std::string> Solution::KEYS = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main()
{
    Solution sol;
    std::vector<std::string> result = sol.letterCombinations("23");

    // Print the result
    std::cout << "Letter Combinations: ";
    for (const std::string &str : result)
    {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
