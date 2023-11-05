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

int n, m;

int map[100][100] = {0};

int flood(int y, int x)
{
    while (!q.empty())
    {
        q.pop();
    };
    q.push({y, x});
    map[y][x] = 0;

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
            if (map[dy][dx] == 0)
                continue;
            map[dy][dx] = 0;
            q.push({dy, dx});
        }
    }
    return 0;
}

int main()
{
    cin >> n >> m;
    int cnt = 0;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> map[y][x];
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if (map[y][x] == 1)
            {
                flood(y, x);
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}
