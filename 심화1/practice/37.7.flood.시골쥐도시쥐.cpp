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

// C = chees S =시골쥐 D=도시쥐 x
char map[20][20] = {};
int n, m;
int used[20][20] = {0};

int flood(Node start, Node end, int lev)
{
    while (!q.empty())
    {
        q.pop();
    };
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            used[y][x] = 0;
        }
    }
    q.push({start.y, start.x, lev});
    used[start.y][start.x] = 1;

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

            if (dy < 0 || dx < 0 || dy >= n || dx >= m)
                continue;
            if (map[dy][dx] == 'x' || map[dy][dx] == 'X')
                continue;
            if (used[dy][dx] == 1)
                continue;
            used[dy][dx] = 1;
            q.push({dy, dx, now.lev + 1});

            if (dy == end.y && dx == end.x)
                return now.lev + 1;
        }
    }
    return 0;
}

int main()
{
    cin >> n >> m;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> map[y][x];
        }
    }

    Node S;
    Node C;
    Node D;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if (map[y][x] == 'S')
            {
                S = {y, x};
            }
            if (map[y][x] == 'D')
            {
                D = {y, x};
            }
            if (map[y][x] == 'C')
            {
                C = {y, x};
            }
        }
    }

    int a = flood(S, C, 0);
    int b = flood(C, D, a);
    cout << b;
    return 0;
}
