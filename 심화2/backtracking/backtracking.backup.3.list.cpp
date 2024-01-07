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

int map[3][3] = {
    1, 2, 3,
    4, 5, 6,
    7, 8, 9};
int direct[4][2] = {
    -1,
    0,
    0,
    -1,
    1,
    0,
    0,
    1,
};

int mini = 2e5;
int getSum(int map[3][3])
{
    int sum = 0;
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            sum += map[y][x];
        }
    }
    return sum;
}

void bomb(int map[3][3], int y, int x)
{
    for (int i = 0; i < 4; i++)
    {
        int dy, dx;
        dy = y + direct[i][0];
        dx = x + direct[i][1];

        if (dy < 0 || dx < 0 || dy >= 3 || dx >= 3)
            continue;
        map[dy][dx] = (map[dy][dx] * 7) % 10;
    }
}

void run(int lev)
{
    if (lev == 3)
    {
        int sum = getSum(map);
        if (mini > sum)
        {
            mini = sum;
        }
        return;
    }

    int backup[3][3] = {0};
    memcpy(backup, map, 4 * 3 * 3);
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            bomb(map, y, x);
            run(lev + 1);
            memcpy(map, backup, 4 * 3 * 3);
        }
    }
}
int main()
{
    run(0);
    cout << mini;
}