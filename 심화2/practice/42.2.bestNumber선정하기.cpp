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

int map[5] = {0};
int path[5];
int used[5];
int maxi = -2e5;
int mini = 2e5;

void run(int lev)
{
    if (lev == 5)
    {
        int a = (path[0] * path[1]) - (path[2] * path[3]) + path[4];
        if (maxi < a)
        {
            maxi = a;
        }
        if (mini > a)
        {
            mini = a;
        }
        return;
    }

    for (int i = 0; i < 5; i++)
    {
        if (used[i] == 1)
            continue;
        used[i] = 1;
        path[lev] = map[i];
        run(lev + 1);
        used[i] = 0;
    }
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> map[i];
    }
    run(0);
    cout << maxi << endl
         << mini;
}