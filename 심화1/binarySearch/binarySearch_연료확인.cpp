/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <algorithm>

string fuel = "#####_________";
int main()
{
    int start = 0;
    int end = fuel.length();

    int max = 0;
    while (start <= end)
    {

        int mid = (start + end) / 2;

        if (fuel[mid] == '#')
        {
            start = mid + 1;
            if (max < mid)
                max = mid;
        }
        else
        {
            end = mid - 1;
        }
    }

    int total = fuel.length();
    cout << ((max + 1) * 100) / total << "%";
}
