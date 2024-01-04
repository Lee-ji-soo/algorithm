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

int memo[4000] = {0};
int map[10]{0};
int value, cnt;

int getMinDong(int n)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return 2e9;
    if (memo[n] != 0)
        return memo[n];
    int m = 2e9;
    for (int i = 0; i < cnt; i++)
    {
        int temp = getMinDong(n - map[i]) + 1;
        if (m > temp)
        {
            m = temp;
        }
    }

    memo[n] = m;
    return m;
}

int main()
{
    cin >> value >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> map[i];
    }
    int mini = getMinDong(value);
    if (mini > 3000)
    {
        cout << "impossible";
    }
    else
    {
        cout << mini;
    }
    return 0;
}