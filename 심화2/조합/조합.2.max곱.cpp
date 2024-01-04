/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int map[10] = {5, 4, 7, -7, -9, 4, -1};
int path[10] = {0};
int used[10] = {0};
int maxiPath[10] = {0};
int m = -99;
int n = 3;
void run(int lev, int mul)
{
    if (lev == n)
    {
        if (m < mul)
        {
            m = mul;
            memcpy(maxiPath, path, 4 * 10);
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < 6; i++)
    {
        if (used[i] == 1)
            continue;
        path[lev] = map[i];
        used[i] = 1;
        run(lev + 1, mul * map[i]);
        used[i] = 0;
    }
}

int main()
{
    run(0, 1);
    for (int i = 0; i < 3; i++)
    {
        cout << maxiPath[i] << " * ";
    }
    cout << "=" << m;
}