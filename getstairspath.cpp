#include <iostream>
#include <vector>
using namespace std;

vector<string> getStairPaths(int n)
{
    if (n <= 0)
    {
        vector<string> bres;

        if (n == 0)
        {
            bres.push_back("");
        }

        return bres;
    }

    vector<string> paths1 = getStairPaths(n - 1);
    vector<string> paths2 = getStairPaths(n - 2);
    vector<string> paths3 = getStairPaths(n - 3);
    vector<string> paths;

    for (string path : paths1)
    {
        paths.push_back("1" + path);
    }

    for (string path : paths2)
    {
        paths.push_back("2" + path);
    }

    for (string path : paths3)
    {
        paths.push_back("3" + path);
    }

    return paths;
}

int main()
{
    int n;
    cin >> n;
    vector<string> paths = getStairPaths(n);

    cout << "[";

    for (int i = 0; i < paths.size(); i++)
    {
        cout << "\"" << paths[i] << "\"";
        if (i != paths.size() - 1)
        {
            cout << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}
