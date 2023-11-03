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

int dist[4][2] = {
    {-1, 0},
    {1, 0},
    {0, 1},
    {0, -1},
};

int map[5][6] = {
    {1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 1},
    {0, 1, 0, 1, 0, 1},
    {0, 1, 0, 0, 1, 1},
    {1, 0, 0, 1, 0, 0},
};

int cnt = 0;

queue<Node> q;
int used[5][6] = {0};

void flood(int y, int x)
{
    q.push({y, x});
    used[y][x] = 1;

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        for (int t = 0; t < 4; t++)
        {
            int dy = now.y + dist[t][0];
            int dx = now.x + dist[t][1];

            if (used[dy][dx] == 1)
                continue;
            if (dy < 0 || dy >= 5 || dx < 0 || dx >= 6)
                continue;
            if (map[dy][dx] == 0)
                continue;

            q.push({dy, dx});
            map[dy][dx] = 0;
            used[dy][dx] = 1;
        }
    }
    cnt++;
}

int main()
{
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 6; x++)
        {
            if (map[y][x] == 1)
            {
                flood(y, x);
            }
        }
    }
    cout << "총" << cnt << "개의 섬이 있습니다.";
    return 0;
}
