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

int map[16] = {
    0, 3, 5, -99, 7, 4, -100, 5, 4, 1000, 1, 5, 9, 2, 6, 0};

int getMax(int n)
{
    if (n == 0)
        return map[0];
    if (n < 0)
        return -999;
    int a = getMax(n - 3) + map[n];
    int b = getMax(n - 5) + map[n];

    int m = max(a, b);
    return m;
}
int main()
{
    cout << getMax(15);
    return 0;
}