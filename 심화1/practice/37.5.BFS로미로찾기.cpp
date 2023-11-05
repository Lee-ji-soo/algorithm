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

int map[4][4] = {
    {0, 0, 0, 0},
    {1, 1, 0, 1},
    {0, 0, 0, 0},
    {1, 0, 1, 0},
};
int a, b, c, d;

int flood(Node start, Node end)
{
    q.push({start.y, start.x});
    map[start.y][start.x] = 0;

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
            if (map[dy][dx] == 1)
                continue;

            map[dy][dx] = map[now.y][now.x] + 1;
            q.push({dy, dx});

            if (dy == end.y && dx == end.x)
                return map[end.y][end.x];
        }
    }
    return 0;
}

int main()
{
    cin >> a >> b >> c >> d;
    cout << flood({a, b}, {c, d}) << "회";
    return 0;
}
