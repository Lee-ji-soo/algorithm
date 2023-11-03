/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
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

int map[3][6] = {
    {0, 0, 0, 0, 1, 0},
    {1, 1, 1, 0, 1, 0},
    {0, 0, 0, 0, 0, 0},
};

int cnt = 0;

queue<Node> q;
int used[3][6] = {0};

int flood(Node start, Node end)
{
    while (!q.empty())
    {
        q.pop();
    }
    memset(used, 0, 3 * 6 * 4);

    q.push({start.y, start.x});
    used[start.y][start.x] = 1;
    int tempMap[3][6] = {0};

    // 초기화
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 6; x++)
        {
            tempMap[y][x] = map[y][x];
        }
    }

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
            if (dy < 0 || dy >= 3 || dx < 0 || dx >= 6)
                continue;
            if (tempMap[dy][dx] == 1)
                continue;

            tempMap[dy][dx] = tempMap[now.y][now.x] + 1;
            q.push({dy, dx});
            used[dy][dx] = 1;

            if (dy == end.y && dx == end.x)
                return tempMap[end.y][end.x];
        }
    }
    return 0;
}

int main()
{
    int a, b;
    a = 0;
    b = 0;

    int cy = 2;
    int cx = 0;
    int beforeEatCheese = flood({a, b}, {cy, cx});
    int afterEatCheese = flood({cy, cx}, {0, 5});
    cnt = beforeEatCheese + afterEatCheese;
    cout << "치즈를 먹고 총" << cnt << "번만에 도착합니다.";
    return 0;
}

// 중간에 dy,dx가 target y, target x와 같으면 return하도록 한다.