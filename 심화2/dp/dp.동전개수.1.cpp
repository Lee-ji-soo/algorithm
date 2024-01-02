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

int memo[100] = {0};

int getMinDong(int n)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return 99;
    if (memo[n] != 0)
        return memo[n];

    int a = getMinDong(n - 1) + 1;
    int b = getMinDong(n - 7) + 1;
    int c = getMinDong(n - 10) + 1;

    int m = min(a, min(b, c));
    memo[n] = m;
    return m;
}
int main()
{
    cout << getMinDong(14);
    return 0;
}