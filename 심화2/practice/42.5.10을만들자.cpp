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

int map[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int cnt;
int n = 0;
int target = 10;

void run(int lev, int sum)
{
    if (sum > target)
        return;
    if (lev == n)
    {
        if (sum == target)
        {
            cnt++;
            return;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        run(lev + 1, sum + map[i]);
    }
}

int main()
{
    cin >> n;
    run(0, 0);
    cout << cnt;
}