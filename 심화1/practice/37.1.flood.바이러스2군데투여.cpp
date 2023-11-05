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

int main()
{
    queue<Node> q;
    int n = 0;
    cin >> n;
    int map[100][100] = {0};

    int direct[4][2] = {
        {-1, 0},
        {1, 0},
        {0, 1},
        {0, -1}};

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    q.push({a, b});
    q.push({c, d});
    map[a][b] = 1;
    map[c][d] = 1;

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

            if (dy < 0 || dx < 0 || dy >= n || dx >= n)
                continue;
            if (map[dy][dx] > 0)
                continue;

            map[dy][dx] = map[now.y][now.x] + 1;
            q.push({dy, dx});
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cout << map[y][x];
        }
        cout << endl;
    }
    return 0;
}
