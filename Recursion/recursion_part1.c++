#include <bits\stdc++.h>
using namespace std;

// void printDecreasing(int n)
// {
//     // base case
//     if (n == 0)
//         return;

//     cout << n << endl;
//     printDecreasing(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     printDecreasing(n);

//     return 0;
// }

// void printIncreasing(int n)
// {
//     // base case
//     if (n == 0)
//         return;
//     printIncreasing(n - 1);
//     cout << n << endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     printIncreasing(n);

//     return 0;
// }

// 3
// void printDecreasingIncreasing(int n)
// {
//     // base case
//     if (n == 0)
//         return;

//     cout << n << endl;
//     printDecreasingIncreasing(n - 1);
//     cout << n << endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     printDecreasingIncreasing(n);

//     return 0;
// }

// 4
// int FactorialOfNumber(int n)
// {
//     // base case
//     if (n == 1)
//         return 1;
//     return n * FactorialOfNumber(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int fact = FactorialOfNumber(n);
//     cout << fact << endl;
// }

// 7 method 1
// int power(int x, int n)
// {
//     if (n == 0)
//         return 1;

//     int xnm1 = power(x, n - 1);
//     int xn = x * xnm1;
//     return xn;
// }
// int main()
// {
//     int x, n;
//     cin >> x >> n;
//     int powerOfNumber = power(2, 2);
//     cout << powerOfNumber << endl;
//     return 0;
// }

// method 2
// int power(int x, int n)
// {
//     if (n == 0)
//         return 1;

//     int xpnb2 = power(x, n / 2);
//     int xn = xpnb2 * xpnb2;
//     if (n % 2 == 1)
//     {
//         xn = xn * x;
//     }
//     return xn;
// }
// int main()
// {
//     int x, n;
//     cin >> x >> n;
//     cout << power(x, n) << endl;
//     return 0;
// }

// display array
// void displayArray(int arr[], int idx, int n)
// {
//     if (idx == n)
//         return;

//     cout << arr[idx] << endl;   //arr[0]==10  20
//     displayArray(arr, idx + 1, n); ///
// }

// int main()
// {
//     int n;
//     cin >> n;    //2
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];      //10 20
//     }

//     displayArray(arr, 0, n);  //
//     return 0;

// }

// display reverse array

// void displayReverseArray(int arr[], int idx, int n)
// {
//     if (idx == n) // 0===2
//         return;

//     displayReverseArray(arr, idx + 1, n); //,1,2
//     cout << arr[idx] << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     displayReverseArray(arr, 0, n);
//     return 0;
// }

// q10 -->zig zag printing

// void pattern(int n)
// {
//     if (n == 0)
//         return;

//     cout << n << " "; // pre area
//     pattern(n - 1);   // left call
//     cout << n << " "; // in area
//     pattern(n - 1);   // right call
//     cout << n << " "; // post area
// }
// int main()
// {
//     int n;
//     cout << "Enter number n =>" << endl;
//     cin >> n;
//     pattern(n);
//     return 0;
// }

// q11 tower of hanoi
// void toh(int n, char t1id, char t2id, char t3id)
// {
//     if (n == 0)
//         return;

//     toh(n - 1, t1id, t3id, t2id);                    // this will move n-1 dics to tower 1 to 3 with the help of tower 2
//     cout << n << "[" << t1id << "->" << t2id << "]"; // this will print instructions
//     toh(n - 1, t3id, t2id, t1id);                    // this will move n-1 dics from tower3 to tower 2 with the help of tower 1
// }
// int main()
// {
//     int n = 3;
//     char a, b, c;
//     toh(n, a, b, c);
//     return 0;
// }

// q12 --> subsequence of a string
// vector<string> gss(string str)
// {
//     if (str.length() == 0) // base case
//     {
//         vector<string> base;
//         base.push_back("");
//         return base;
//     }

//     char ch = str[0];               // a
//     string ros = str.substr(1);     //"bc"
//     vector<string> rres = gss(ros); //[--,-c,b-,bc]

//     vector<string> mres;
//     for (string rstr : rres)
//     {
//         mres.push_back("" + rstr); // Include the current character
//         mres.push_back(ch + rstr); // Exclude the current character
//     }

//     return mres;
// }

// int main()
// {
//     string str;
//     str = "abc";
//     vector<string> ans = gss(str);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// maximum element in an array
// int displayMaximumArrayElement(int arr[], int idx, int n)
// {
//     // Base case: If the index is at the last element, return that element as the maximum.
//     if (idx == n - 1)
//         return arr[idx];

//     // Recursively find the maximum element in the rest of the array.
//     int maxInRest = displayMaximumArrayElement(arr, idx + 1, n);

//     // Compare the current element with the maximum in the rest of the array.
//     if (arr[idx] > maxInRest)
//         return arr[idx];
//     else
//         return maxInRest;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int maxElement = displayMaximumArrayElement(arr, 0, n);
//     cout << "The maximum element in the array is: " << maxElement << endl;

//     return 0;
// }

// all indices in an array   found so far

/// strings in c++

// int main()
// {
//     string neetu = "iloveu";
//     cout << neetu << endl;
//     for (int i = 0; i < neetu.length(); i++)
//     {
//         char ch = neetu[i];
//         cout << ch << endl;
//     }
//     string divyansha = neetu.substr(2, 4);
//     cout << divyansha << endl;
//     bool isfind = neetu.find("m");
//     cout << isfind << endl;
// }
