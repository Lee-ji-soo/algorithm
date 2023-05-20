/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

char a[12] = {"ACQRAGGVHDI"};

int isCtoH(char a)
{
    if (a >= 'C' && a <= 'H')
    {
        return 1;
    }
    return 0;
}

int compare(char a, char b)
{
    if (isCtoH(a) && isCtoH(b) == 0)
    {
        return 1;
    }

    if (isCtoH(a) == 0 && isCtoH(b))
    {
        return 0;
    }

    return a > b;
}

int main()
{
    sort(a, a + 11, compare);
    return 0;
}