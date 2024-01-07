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

int map[3] = {5, 3, 2};
int path[4] = {0};
char op[3] = {'*', '+', '/'};
int target = 15;
int cnt = 0;
void run(int lev, int sum)
{
    if (lev == 4)
    {
        if (sum == target)
        {
            cnt++;
        }
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        int tempSum = sum;

        path[lev] = map[i];
        if (map[i] == 3)
        {
            tempSum += map[i];
        }
        else if (map[i] == 5)
        {
            tempSum *= map[i];
        }
        else if (map[i] == 2)
        {
            tempSum /= map[i];
        }
        run(lev + 1, tempSum);
    }
}
int main()
{
    run(0, 0);
    cout << cnt;
}