#include <iostream>
using namespace std;

void printPermutations(string str, string asf)
{
    if (str.length() == 0)
    {
        cout << asf << endl;
        return;
    }

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        cout << ch << " ";
        string leftPart = str.substr(0, i);
        cout << leftPart << endl;
        string rightPart = str.substr(i + 1);
        cout << rightPart << endl;
        string roq = leftPart + rightPart;
        cout << roq << endl;
        printPermutations(roq, asf + ch);
    }
}

int main()
{
    string str;
    cin >> str;
    printPermutations(str, "");
    return 0;
}
