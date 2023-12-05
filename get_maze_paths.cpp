#include <iostream>
#include <vector>
using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column

// vector<string> getMazePaths(int sr, int sc, int dr, int dc)
// {
//     // base case
//     if (sr == dr && sc == dc)
//     {
//         vector<string> bres;
//         bres.push_back(".");
//         return bres;
//     }

//     vector<string> hpaths;
//     vector<string> vpaths;

//     if (sc < dc)
//     {
//         hpaths = getMazePaths(sr, sc + 1, dr, dc);
//     }
//     if (sr < dr)
//     {
//         vpaths = getMazePaths(sr + 1, sc, dr, dc);
//     }

//     vector<string> paths;

//     for (string hpath : hpaths)
//     {
//         paths.push_back("h" + hpath);
//     }

//     for (string vpath : vpaths)
//     {
//         paths.push_back("v" + vpath);
//     }

//     return paths;
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<string> paths = getMazePaths(1, 1, n, m);

//     cout << "[";
//     for (int i = 0; i < paths.size(); i++)
//     {
//         cout << "\"" << paths[i] << "\"";
//         if (i != paths.size() - 1)
//         {
//             cout << ", ";
//         }
//     }
//     cout << "]" << endl;

//     return 0;
// }

// with jumps
#include <iostream>
#include <vector>
using namespace std;

vector<string> getMazePaths(int sr, int sc, int dr, int dc)
{
    if (sr == dr && sc == dc)
    {
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    else if (sr > dr || sc > dc)
    {
        vector<string> bres;
        return bres;
    }

    vector<string> paths;

    for (int hms = 1; hms <= dc - sc; hms++)
    {
        vector<string> hpaths = getMazePaths(sr, sc + hms, dr, dc);

        for (string hpath : hpaths)
        {
            paths.push_back("h" + to_string(hms) + hpath);
        }
    }

    for (int vms = 1; vms <= dr - sr; vms++)
    {
        vector<string> vpaths = getMazePaths(sr + vms, sc, dr, dc);

        for (string vpath : vpaths)
        {
            paths.push_back("v" + to_string(vms) + vpath);
        }
    }

    for (int dms = 1; dms <= dr - sr && dms <= dc - sc; dms++)
    {
        vector<string> dpaths = getMazePaths(sr + dms, sc + dms, dr, dc);

        for (string dpath : dpaths)
        {
            paths.push_back("d" + to_string(dms) + dpath);
        }
    }

    return paths;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> paths = getMazePaths(1, 1, n, m);

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
