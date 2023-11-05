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
};
queue<Node> q;

int direct[4][2] = {
    {-1, 0},
    {1, 0},
    {0, 1},
    {0, -1}};

int map[4][6] = {0};

int cnt;

int flood(int y, int x)
{
    q.push({y, x});
    map[y][x] = 1;

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

            if (dy < 0 || dx < 0 || dy >= 4 || dx >= 6)
                continue;
            if (map[dy][dx] == 1)
                continue;
            if (map[dy][dx] == 2)
                cnt++;

            map[dy][dx] = 1;
            q.push({dy, dx});
        }
    }
    return 0;
}

int main()
{
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 6; x++)
        {
            cin >> map[y][x];
        }
    }
    flood(0, 0);
    cout << cnt;
    return 0;
}
