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

int compare(int a, int b)
{
    return a > b;
}
int map[3] = {50, 70, 100};
int path[3] = {0};
int tempLev = -1;
int target = 140;
void run(int lev, int sum)
{
    if (sum == target)
    {
        tempLev = lev;
        return;
    }
    if (sum > target || lev == tempLev)
    {
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        path[lev] = map[i];
        run(lev + 1, sum + map[i]);
    }
}
int main()
{
    sort(map, map + 3, compare);
    run(0, 0);
    cout << tempLev;
}