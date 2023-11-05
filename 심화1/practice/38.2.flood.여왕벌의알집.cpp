/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

struct Node
{
    int y;
    int x;
    int lev;
};

struct Max
{
    int n;
    int lev;
};

int a, b;
int direct[4][2] = {
    {-1, 0},
    {1, 0},
    {0, -1},
    {0, 1}};
queue<Node> q;
int used[4][9] = {0};
Max maxi = {-200, 0};
Max lastq;
int map[4][9] = {0};

Max bfs(int y, int x, int lev)
{
    while (!q.empty())
    {
        q.pop();
    }

    q.push({y, x, lev});
    used[y][x] = 1;
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        for (int d = 0; d < 4; d++)
        {
            int dy, dx;
            dy = now.y + direct[d][0];
            dx = now.x + direct[d][1];

            if (dy < 0 || dx < 0 || dy >= a || dx >= b)
                continue;
            if (used[dy][dx] == 1)
                continue;
            if (map[dy][dx] != map[now.y][now.x])
                continue;
            used[dy][dx] = 1;
            lev++;
            q.push({dy, dx, lev});
            lastq = {map[dy][dx], lev};
        }
    }
    return lastq;
}

int main()
{
    a = 4;
    b = 9;

    for (int y = 0; y < a; y++)
    {
        for (int x = 0; x < b; x++)
        {
            cin >> map[y][x];
        }
    }

    for (int y = 0; y < a; y++)
    {
        for (int x = 0; x < b; x++)
        {
            if (used[y][x] != 1)
            {
                Max bbb = bfs(y, x, 1);
                if (maxi.lev < bbb.lev)
                {
                    maxi = bbb;
                }
            }
        }
    }

    cout << maxi.n * maxi.lev;
    return 0;
}
