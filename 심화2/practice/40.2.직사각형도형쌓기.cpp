/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int num = 0;
int dp(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    int a = dp(n - 1);
    int b = dp(n - 2);
    return a + b;
}

int main()
{
    cin >> num;
    cout << dp(num);
    return 0;
}