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

int map[6] = {1, 2, 3, 4, 5, 6};
int path[3] = {0};
int used[6] = {0};
void run(int lev, int mul)
{
    if (mul >= 50)
        return;
    if (lev == 3)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << path[i];
        }
        cout << " = " << mul << endl;
        return;
    }
    for (int i = 0; i < 6; i++)
    {
        if (used[i] == 1)
            continue;
        path[lev] = map[i];
        used[i] = 1;
        run(lev + 1, mul * map[i]);
        path[lev] = 0;
        used[i] = 0;
    }
}

int main()
{
    run(0, 1);
    return 0;
}