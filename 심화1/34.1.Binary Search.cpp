/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

int q[10] = {4, 4, 5, 7, 8, 10, 20, 22, 23, 24};

int main()
{
    //

    int start = 0;
    int end = 9;

    int n = 0;
    cin >> n;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (q[mid] == n)
        {
            cout << "O";
            return 0;
        }

        if (q[mid] < n)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "X";
    return 0;
}
