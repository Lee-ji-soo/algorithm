/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> map;
int MINI = -2e8;
int memo[200] = {0};

int getMax(int n)
{
    if (n < 0)
        return MINI;
    if (n == 0)
        return map[n];
    if (memo[n] > 0)
        return memo[n];
    int a = getMax(n - 7) + map[n];
    int b = getMax(n - 2) + map[n];
    int m = max(a, b);
    memo[n] = m;
    return m;
}

int main()
{
    for (int i = 0; i < 200; i++)
    {
        memo[i] = MINI;
    }

    int n = 0;
    cin >> n;
    map.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        map.push_back(a);
    }
    for (int i = n; i < n + 7; i++)
    {
        map.push_back(0);
    }
    int maxi = -2e9;
    for (int i = n / 2; i < n + 7; i++)
    {
        int a = getMax(i);
        if (maxi < a)
        {
            maxi = a;
        }
    }

    cout << maxi;
    return 0;
}