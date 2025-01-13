#include <bits\stdc++.h>
using namespace std;

// wt weight of items
// val value of items
// w weight of beg
// n no of items
// int knapsack(int wt[], int val[], int w, int n)
// {
//     // smallest valid input
//     if (n == 0 || w == 0)
//         return 0;

//     // if item weight is less then beg weight
//     if (wt[n - 1] <= w)
//         return max(val[n - 1], knapsack(wt, val, w - wt[n - 1], n - 1));

//     else if (wt[n - 1] > w)
//         return knapsack(wt, val, w, n - 1);
// }

// int t[n][w] //contrainsts dhek lenge question mai se
// memoset(t,-1,sizeof(t));

// int knapsack(int wt[],int val[],int w,int n)
// {
//     if(n==0 ||w==0)
//     return 0;

//     if(t[n][w]!=-1)
//     return t[n][w];

//     if(wt[n-1]<=w)
//     return t[n][w]=max(val[n-1],knapsack(wt,val,w-wt[n-1],n-1));
//     else
//     return t[n][w]=knapsack(wt,val,w,n-1);
// }

int main()
{

    return 0;
}