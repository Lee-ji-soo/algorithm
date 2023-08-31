/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

string oil = "";

int bs(int s, int e)
{
    int start = s;
    int end = e;

    int max = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (oil[mid] == '#')
        {
            max = mid;
            start = mid + 1;
        }
        if (oil[mid] == '_')
        {
            end = mid - 1;
        }
    }
    return max;
}

int main()
{

    cin >> oil;

    int len = oil.length();
    int fuel = bs(0, len) + 1;
    cout << (fuel * 100) / len << '%';
    return 0;
}
