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

int map[6] = {0};
int maxi = -2e5;
int n = 0;

void dd(int map[6])
{
    for (int i = 0; i < 6; i++)
    {
        if (map[i] == 0)
            continue;
        map[i] = map[i] * 2;
    }
}

void run(int lev, int sum)
{
    if (lev == n)
    {
        if (maxi < sum)
        {
            maxi = sum;
        }
        return;
    }

    if (lev > 0)
    {
        dd(map);
    }

    int backup[6];
    memcpy(backup, map, 6 * 4);
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 3; j <= 5; j++)
        {
            for (int k = 1; k <= 4; k++)
            {

                int temp = 0;
                temp += map[i];
                map[i] = 0;
                temp += map[j];
                map[j] = 0;
                temp += map[k];
                map[k] = 0;

                run(lev + 1, sum + temp);
                memcpy(map, backup, 6 * 4);
            }
        }
    }
    return;
}
int main()
{
    for (int i = 0; i < 6; i++)
    {
        cin >> map[i];
    }
    cin >> n;
    run(0, 0);
    cout << maxi;
    return 0;
}