/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
    int y;
    int x;
    int lev;
};
queue<Node> q;

int direct[8][2] = {
    {-1, -1},
    {-1, 0},
    {-1, 1},
    {0, 1},
    {1, 1},
    {1, 0},
    {1, -1},
    {0, -1}};

int map[4][5] = {0};
int t = 1;

int flood(int y, int x, int lev)
{
    q.push({y, x, lev});
    map[y][x] = lev;
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        for (int y = 0; y < 8; y++)
        {
            int dy;
            int dx;

            dy = now.y + direct[y][0];
            dx = now.x + direct[y][1];

            if (dy < 0 || dx < 0 || dy >= 4 || dx >= 5)
                continue;
            if (map[dy][dx] >= 1)
                continue;

            t = now.lev;
            map[dy][dx] = t;
            q.push({dy, dx, t + 1});
        }
    }
    return t;
}

int main()
{
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cin >> map[y][x];
        }
    }

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (map[y][x] == 1)
            {
                t = flood(y, x, t);
            }
        }
    }
    cout << t;
    return 0;
}
