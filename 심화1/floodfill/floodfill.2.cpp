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

int main()
{
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

    int map[3][3] = {0};
    map[0][2] = {1};
    map[1][0] = {1};

    q.push({0, 2});
    q.push({1, 0});

    int day = 1;
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        for (int t = 0; t < 4; t++)
        {
            int dy = now.y + dist[t][0];
            int dx = now.x + dist[t][1];

            if (dy < 0 || dy >= 3 || dx < 0 || dx >= 3)
                continue;
            if (map[dy][dx] != 0)
                continue;

            map[dy][dx] = map[now.y][now.x] + 1;
            day = map[now.y][now.x] + 1;
            q.push({dy, dx});
        }
    }
    cout << day << "일";
    return 0;
}