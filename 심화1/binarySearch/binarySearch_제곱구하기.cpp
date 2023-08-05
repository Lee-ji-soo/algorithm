/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <algorithm>

// 제곱
int n = 5;
int main()
{
    int start = 1;
    int end = n;

    int mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if ((mid * mid) == n)
        {
            break;
        }
        if ((mid * mid) > n)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << mid;
}