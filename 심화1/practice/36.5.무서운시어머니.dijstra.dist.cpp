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
    int x;
    int y;
    int price;
};
priority_queue<Node> q;
int MAX = 2e9;
bool operator<(Node t, Node v)
{
    return t.price > v.price;
}
vector<vector<Node>> alist(200000);

int main()
{
    int sy, sx;
    cin >> sy >> sx;
    int n = 0;
    cin >> n;
    int maps[n][n] = {0};
    int results[n][n] = {0};

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> maps[y][x];
            results[y][x] = MAX;
        }
    }

    int dist[4][2] = {
        -1,
        0,
        1,
        0,
        0,
        1,
        0,
        -1,
    };

    q.push({sy, sx, maps[sy][sx]});

    while (!q.empty())
    {
        Node now = q.top();
        q.pop();

        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < n; x++)
            {
                for (int i = 0; i < 4; i++)
                {
                    int dy;
                    int dx;

                    dy = now.y + dist[i][0];
                    dx = now.x + dist[i][1];

                    if (dy < 0 || dy >= n || dx < 0 || dx >= n)
                        continue;
                    if (maps[dy][dx] == -1)
                        continue;

                    int total = now.price + maps[dy][dx];
                    if (results[dy][dx] > total)
                    {
                        results[dy][dx] = total;
                        q.push({dy, dx, total});
                    }
                }
            }
        }
    }

    int max = -2e8;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (results[y][x] == MAX)
                continue;
            if (max < results[y][x])
            {
                max = results[y][x];
            }
        }
    }

    cout << max;
    return 0;
}