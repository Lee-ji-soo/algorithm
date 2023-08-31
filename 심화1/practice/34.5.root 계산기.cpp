/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n = 0;

int bs(int s, int e)
{
    int start = s;
    int end = e;
    int max = 0;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        int q = mid * mid;
        if (q == n)
        {
            return mid;
        }
        if (q < n)
        {
            start = mid + 1;
            max = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return max;
}

int main()
{
    cin >> n;
    int b = bs(0, n);
    cout << b;
    return 0;
}

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17