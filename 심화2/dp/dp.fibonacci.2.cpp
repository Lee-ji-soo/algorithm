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
int getFibo(int n)
{
    if (memo[n] != 0)
        return memo[n];
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = getFibo(n - 1);
    int b = getFibo(n - 2);
    memo[n] = a + b;
    return a + b;
}
int main()
{
    getFibo(4);
    return 0;
}