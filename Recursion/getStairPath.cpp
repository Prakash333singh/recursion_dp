#include <bits\stdc++.h>
using namespace std;
void printStairPaths(int n, string path)
{
    if (n < 0)
        return;
    if (n == 0)
    {
        cout << path << " ";
        return;
    }
    printStairPaths(n - 1, path + "1");
    printStairPaths(n - 2, path + "2");
    printStairPaths(n - 3, path + "3");
}
int main()
{
    int n;
    cin >> n;
    printStairPaths(5, "");
    return 0;
}
