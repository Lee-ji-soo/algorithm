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

int map[5][4] = {
    4, 5, -9, -7,
    -8, -50, 4, 7,
    -30, 20, -5, 7,
    -5, -90, -100, 3,
    4, 5, 6, 9};
int used[5][4] = {0};
int maxMinusCount = 2;
long long maxMul = -2e5;
int n = 5;
void run(int lev, int mul, int minusCnt)
{
    if (minusCnt > maxMinusCount)
        return;
    if (lev == n)
    {
        if (maxMul < mul)
        {
            maxMul = mul;
        };
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int tempMinusCnt = minusCnt;
        if (map[lev][i] < 0)
        {
            tempMinusCnt = minusCnt + 1;
        }
        run(lev + 1, mul * map[lev][i], tempMinusCnt);
    }
}
int main()
{
    run(0, 1, 0);
    cout << maxMul;
}