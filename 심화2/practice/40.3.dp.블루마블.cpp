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

int map[13] = {0};
int nexts[13] = {0};

int main()
{
    for (int i = 0; i < 12; i++)
    {
        int a = 0;
        cin >> a;
        map[i] = nexts[i] = a;
    }
    for (int i = 1; i < 12; i++)
    {
        int a, b, c;
        if (i - 2 > 0)
        {
            a = map[i] + nexts[i - 2];
        }
        else
        {
            a = map[i];
        }
        if (i - 3 > 0)
        {
            b = map[i] + nexts[i - 3];
        }
        else
        {
            b = map[i];
        }
        if (i / 2 > 1 && i % 2 == 0)
        {
            c = map[i] + nexts[i / 2];
        }
        else
        {
            c = -99;
        }
        int m = max(a, max(b, c));
        nexts[i] = m;
    }

    int m = -99;
    for (int i = 6; i < 12; i++)
    {
        if (m < nexts[i])
        {
            m = nexts[i];
        }
    }

    cout << m;
    return 0;
}