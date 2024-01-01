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

int map[7][3] = {0};
int nexts[7][3] = {0};
int dir[3][2] = {
    -1, -1,
    -1, 0,
    -1, 1};

int go(int y, int x)
{
    for (int i = 0; i < 3; i++)
    {
        int dy, dx;
        dy = y + dir[i][0];
        dx = x + dir[i][1];

        if (dy < 0 || dx < 0 || dy >= 7 || dx >= 3)
            continue;
        if (map[dy][dx] == 0)
            continue;
        int n = map[dy][dx] + nexts[y][x];
        if (n > nexts[dy][dx])
        {
            nexts[dy][dx] = n;
            go(dy, dx);
        }
    }
    return 0;
}
int main()
{

    for (int y = 0; y < 7; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cin >> map[y][x];
        }
    }
    go(7, 0);
    go(7, 1);
    go(7, 2);
    cout << nexts[0][0];
    return 0;
}