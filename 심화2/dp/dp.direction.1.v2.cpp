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
    DOWN = 1,
    RIGHT,
};

int map[4][4] = {
    {0, 4, 7, 9},
    {1, 2, 3, 2},
    {6, 5, 20, 4},
    {3, 1, 7, 0}};

int nexts[4][4] = {0};

int goDir[2][2] = {
    {-1, 0},
    {0, -1}};

int checkDir[2][2] = {
    {1, 0},
    {0, 1}};

int bangDir[4][4] = {0};

void go(int y, int x)
{
    int min = 999;
    for (int i = 0; i < 2; i++)
    {
        int dy, dx;
        dy = y + goDir[i][0];
        dx = x + goDir[i][1];

        if (dy < 0 || dy > 3 || dx < 0 || dx > 3)
            continue;
        if (nexts[dy][dx] == 0 || nexts[dy][dx] > nexts[y][x] + map[dy][dx])
        {
            if (i == 0)
            {
                bangDir[dy][dx] = DOWN;
            }
            else
            {
                bangDir[dy][dx] = RIGHT;
            }
            nexts[dy][dx] = nexts[y][x] + map[dy][dx];
        }
        go(dy, dx);
    }
};

int main()
{
    go(3, 3);
    cout << nexts[0][0] << endl;

    int y = 0;
    int x = 0;
    while (1)
    {
        if (y == 3 && x == 3)
            break;
        cout << y << ", " << x << endl;
        if (bangDir[y][x] == DOWN)
        {
            y++;
        }
        else
        {
            x++;
        }
    }
    return 0;
}