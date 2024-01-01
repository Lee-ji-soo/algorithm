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

enum
{
    UP = 1,
    DOWN,
    LEFT,
    RIGHT
};

int map[4][4] = {0};
int nexts[4][4] = {0};
int bang[4][4] = {0};
int dir[2][2] = {
    0, -1,
    -1, 0};

int go(int y, int x)
{
    for (int i = 0; i < 2; i++)
    {
        int dy, dx;
        dy = y + dir[i][0];
        dx = x + dir[i][1];

        if (dy < 0 || dx < 0 || dy > 3 || dx > 3)
            continue;
        if (nexts[dy][dx] == 0 || nexts[dy][dx] > map[dy][dx] + nexts[y][x])
        {
            nexts[dy][dx] = map[dy][dx] + nexts[y][x];
            go(dy, dx);
            if (i == 0)
            {
                bang[dy][dx] = RIGHT;
            }
            else
            {
                bang[dy][dx] = DOWN;
            }
        }
    }
    return 0;
}
int main()
{
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            cin >> map[y][x];
        }
    }

    go(3, 3);

    int y = 0;
    int x = 0;
    while (y <= 3 && x <= 3)
    {
        cout << y << "," << x << endl;
        if (bang[y][x] == DOWN)
        {
            y++;
        }
        else
        {
            x++;
        }
    }
}