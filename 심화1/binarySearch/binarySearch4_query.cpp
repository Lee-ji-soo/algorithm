/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <algorithm>

// query

int vect[9] = {
    1, 4, 2, 15, 6, 3, 2, -43, 1};

int query[5] = {20, 3, 4, -22, -43};

int bs(int s, int e, int t)
{
    int start = s;
    int end = e;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (vect[mid] == t)
        {
            return 1;
        }
        if (vect[mid] < t)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
};

int main()
{
    sort(vect, vect + 9);

    for (int i = 0; i < 5; i++)
    {
        int b = bs(0, 8, query[i]);

        if (b == 1)
            cout << "O";
        else
            cout << "X";
    }
    return 0;
}
