#include <iostream>
using namespace std;

void printEncodings(string ques, string ans)
{
    // "123"

    // base case
    //  if the length of given string is zero then we have to return an empty string

    if (ques.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    // if length of the given string is 1 then we have to
    else if (ques.length() == 1)
    {
        if (ques[0] == '0')
        {
            return;
        }
        else
        {
            char code0 = 'a' + (ques[0] - '1');
            printEncodings(ques.substr(1), ans + code0);
        }
    }
    else
    {
        if (ques[0] == '0')
        {
            return;
        }
        else
        {
            char code0 = 'a' + (ques[0] - '1');
            printEncodings(ques.substr(1), ans + code0);

            string ch01 = ques.substr(0, 2);
            // remaing part of the question
            string roq01 = ques.substr(2);
            char code01 = 'a' + (stoi(ch01) - 1);

            if (stoi(ch01) <= 26)
            {
                printEncodings(roq01, ans + code01);
            }
        }
    }
}

int main()
{
    string str;
    cin >> str;
    printEncodings(str, "");

    return 0;
}
