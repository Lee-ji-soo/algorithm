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

int map[3] = {60, 40, 10};
int cnt;
int target = 0;
int minLev = 10;

void run(int lev, int sum)
{
    if (sum > target)
        return;
    if (sum == target)
    {
        if (minLev > lev)
        {
            minLev = lev;
        }
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        run(lev + 1, sum + map[i]);
    }
}

int main()
{
    cin >> target;
    run(0, 0);
    cout << minLev;
}