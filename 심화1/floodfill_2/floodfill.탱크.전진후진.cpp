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

enum
{
    UP = 1,
    DOWN,
    RIGHT,
    LEFT,
};

struct Node
{
    int y;
    int x;
    int bang;
    int lev;
};
queue<Node> q;
int map[3][4] = {
    {0, 0, 1, 0},
    {1, 0, 1, 0},
    {0, 0, 0, 0},
};
int used[3][4][5] = {0};

void push(int y, int x, int bang, int lev)
{
    if (y < 0 || x < 0 || y >= 3 || x >= 4)
        return;
    if (map[y][x] == 1)
        return;
    if (used[y][x][bang] == 1)
        return;
    used[y][x][bang] = 1;
    q.push({y, x, bang, lev});
}

int main()
{
    q.push({0, 0, RIGHT, 0});
    used[0][0][RIGHT] = 1;

    int endY = 0;
    int endX = 3;
    int endBang = DOWN;

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        if (now.y == endY && now.x == endX && now.bang == endBang)
        {
            cout << now.lev;
            break;
        }
        if (now.bang == UP)
        {
            push(now.y - 1, now.x, UP, now.lev + 1); // 전진
            push(now.y + 1, now.x, UP, now.lev + 1); // 후진
        }
        if (now.bang == DOWN)
        {
            push(now.y + 1, now.x, DOWN, now.lev + 1); // 전진
            push(now.y - 1, now.x, DOWN, now.lev + 1); // 후진
        }
        if (now.bang == RIGHT)
        {
            push(now.y, now.x + 1, RIGHT, now.lev + 1); // 전진
            push(now.y, now.x - 1, RIGHT, now.lev + 1); // 후진
        }
        if (now.bang == LEFT)
        {
            push(now.y, now.x - 1, LEFT, now.lev + 1); // 전진
            push(now.y, now.x + 1, LEFT, now.lev + 1); // 후진
        }

        if (now.bang == UP || now.bang == DOWN)
        {
            push(now.y, now.x, LEFT, now.lev + 1);  // -90
            push(now.y, now.x, RIGHT, now.lev + 1); // 90
        }
        if (now.bang == LEFT || now.bang == RIGHT)
        {
            push(now.y, now.x, UP, now.lev + 1);   // -90
            push(now.y, now.x, DOWN, now.lev + 1); // 90
        }
    }
    return 0;
}
