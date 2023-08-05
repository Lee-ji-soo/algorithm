/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int target = 31;
int main()
{
    int start = 1;
    int end = 50;
    int mid = 0;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (mid == target)
        {
            cout << "짝짝 한잔";
            break;
        }
        if (mid > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return 0;
}
