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

int map[5][5];
int backup[5][5];
int n = 0;
int maxGop = -4e6;

int getMul(int map[5][5])
{
    int mul = 1;
    for (int x = 0; x < n; x++)
    {
        int sum = 0;
        for (int y = 0; y < n; y++)
        {
            sum += map[y][x];
        }
        mul *= sum;
    }
    return mul;
}
void rotate(int lev, int i, int map[5][5])
{
    int temp[5][5];
    memcpy(temp, map, 5 * 5 * 4);
    int cnt = 0;
    while (cnt < i)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (j - 1 < 0)
            {
                map[lev][j] = temp[lev][n - 1];
            }
            else
            {
                map[lev][j] = temp[lev][j - 1];
            }
        }
        memcpy(temp, map, 5 * 5 * 4);
        cnt++;
    }
}
void run(int lev)
{
    if (lev == n)
    {
        int mul = getMul(map);
        if (mul > maxGop)
        {
            maxGop = mul;
        }
        return;
    }

    // int backup[5][5] = {0};
    // memcpy(backup, map, 5 * 5 * 4);
    for (int i = 0; i < n; i++)
    {
        rotate(lev, i, map);
        run(lev + 1);
        // memcpy(map, backup, 5 * 5 * 4);
    }
};

int main()
{
    cin >> n;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> map[y][x];
        }
    }
    run(0);
    cout << maxGop << "점";
}