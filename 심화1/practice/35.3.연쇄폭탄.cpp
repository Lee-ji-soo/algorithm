/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

struct Node
{
    int y;
    int x;
    int num;
};

priority_queue<Node> q;

bool operator<(Node t, Node v)
{
    return v.num < t.num;
};

int n = 0;

int map[100][100] = {0};
int cnt = 0;

int main()
{
    cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            int m = 0;
            cin >> m;
            map[y][x] = m;
            q.push({y, x, m});
        }
    }

    int dist[4][2] = {
        {-1, 0},
        {1, 0},
        {0, 1},
        {0, -1},
    };

    while (!q.empty())
    {
        Node top = q.top();
        for (int i = 0; i < 4; i++)
        {
            int dy = 0;
            int dx = 0;
            dy = top.y + dist[i][0];
            dx = top.x + dist[i][1];

            if (dy < 0 || dx < 0 || dy > n - 1 || dx > n - 1)
                continue;

            if (map[top.y][top.x] != 0 && map[dy][dx] != 0)
            {
                map[dy][dx] = 0;
                cnt++;
            }
        }

        if (map[top.y][top.x] != 0)
        {
            cnt++;
            map[top.y][top.x] = 0;
            if (cnt == (n * n))
            {
                cout << top.num << "초";
                break;
            }
        }
        q.pop();
    }

    return 0;
}