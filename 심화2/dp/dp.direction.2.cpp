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

int map[3][9] = {
    {3, 100, 100, 3, -5000, 4, 9, 10, 0},
    {5, 2, 100, 4, -5000, 55, 3, 7, 0},
    {1, 5, 4, 7, 2, 1, 1, 4, 0},
};
int goDir[3][2] = {
    -1, -1,
    0, -1,
    1, -1};
int nexts[3][9] = {0};

int go(int y, int x)
{
    for (int i = 0; i < 3; i++)
    {
        int dy, dx;
        dy = y + goDir[i][0];
        dx = x + goDir[i][1];

        if (dy < 0 || dx < 0 || dy > 2 || dx > 8)
            continue;

        if (nexts[y][x] + map[dy][dx] > nexts[dy][dx])
        {
            nexts[dy][dx] = nexts[y][x] + map[dy][dx];
            go(dy, dx);
        }
    }
    return 0;
}

int main()
{
    go(1, 8);

    int max = -999;
    for (int i = 0; i < 3; i++)
    {
        if (max < nexts[i][0])
        {
            max = nexts[i][0];
        }
    }
    cout << max;
    return 0;
}