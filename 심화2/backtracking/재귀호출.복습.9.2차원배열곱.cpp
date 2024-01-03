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

int map[4][4] = {
    {-7, 4, 2, 9},
    {5, 0, 4, 7},
    {5, 4, 9, -1},
    {-2, 3, 4, -9},
};
int path[4] = {0};
int used[4] = {0};
int maxi = -26e4;
int mini = 26e4;
void run(int lev, int mul)
{
    if (lev == 4)
    {
        if (maxi < mul)
        {
            maxi = mul;
        }
        if (mini > mul)
        {
            mini = mul;
        }
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (used[i] == 1)
            continue;
        used[i] = 1;
        run(lev + 1, mul * map[lev][i]);
        used[i] = 0;
    }
}
int main()
{
    run(0, 1);
    cout << "maxi: " << maxi << ", mini: " << mini;
    return 0;
}