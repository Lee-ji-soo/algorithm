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

int direct[4][2] = {
    {-1, 0},
    {1, 0},
    {0, 1},
    {0, -1}};

int map[4][4] = {0};

int flood(int y, int x)
{
    q.push({y, x});
    map[y][x] = 0;
    int t = 1;
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        for (int y = 0; y < 4; y++)
        {
            int dy;
            int dx;

            dy = now.y + direct[y][0];
            dx = now.x + direct[y][1];

            if (dy < 0 || dx < 0 || dy >= 4 || dx >= 4)
                continue;
            if (map[dy][dx] == 0)
                continue;

            map[dy][dx] = 0;
            q.push({dy, dx});
            t++;
        }
    }
    return t;
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
    cout << flood(0, 0);
    return 0;
}
