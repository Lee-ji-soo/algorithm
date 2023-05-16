/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str = "ABBABQACDAA";
int dat[100] = {0};
int main()
{
    for (int i = 0; i < 4; i++)
    {
        dat[str[i]]++;
    }

    int limit = str.length() - 4;

    int maxA = -9e4;

    for (int i = 0; i <= limit; i++)
    {
        if (dat['A' + 0] > maxA)
        {
            maxA = dat['A' + 0];
        }
        if (i == limit)
            break;

        dat[str[i]]--;
        dat[str[i + 4]]++;
    }
    cout << maxA;
    return 0;
}