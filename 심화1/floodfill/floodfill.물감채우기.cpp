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
        {-1, 0}, {1, 0}, {0, 1}, {0, -1}};

    int map[4][4] = {
        {1, 0, 1, 1},
        {0, 0, 0, 1},
        {0, 3, 0, 2},
        {3, 2, 0, 0},
    };

    q.push({1, 2});
    map[1][2] = 1;
    int count = 1;

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        for (int t = 0; t < 4; t++)
        {
            int dy = now.y + dist[t][0];
            int dx = now.x + dist[t][1];

            if (dy < 0 || dy >= 4 || dx < 0 || dx >= 5)
                continue;
            if (map[dy][dx] != 0)
                continue;

            map[dy][dx] = map[now.y][now.x] + 1;
            q.push({dy, dx});
            count++;
        }
    }
    cout << "총" << count << "개의 물감이 채워집니다.";
    return 0;
}