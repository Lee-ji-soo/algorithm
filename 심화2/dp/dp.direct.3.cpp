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

int map[15] = {
    0, 0, 5, 10, -30, 5, 4, -20, -30, -50, 40, 1, 5, 4, 20};
int dp[15] = {0, 0, 5, 10, -30, 5, 4, -20, -30, -50, 40, 1, 5, 4, 20};
int getMax(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
    return a;
}
int main()
{
    for (int i = 2; i < 15; i++)
    {
        int a, b, c;
        if (i - 1 >= 2)
        {
            a = dp[i - 1];
        }
        else
        {
            a = 0;
        }

        if (i - 2 >= 2)
        {
            b = dp[i - 2];
        }
        else
        {
            b = 0;
        }

        if (i / 2 >= 2 && i % 2 == 0)
        {
            c = dp[i / 2];
        }
        else
        {
            c = 0;
        }

        int max = getMax(a, b, c);
        dp[i] += max;
    }
    cout << dp[14];
    return 0;
}