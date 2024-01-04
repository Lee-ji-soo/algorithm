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
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = fibo(n - 1);
    int b = fibo(n - 2);
    return a + b;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n - 1);
    return 0;
}
