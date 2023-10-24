/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int y, x;
    int price;
};

int MAX = 2e8;

int direct[4][2] = {
    {1, 0},
    {-1, 0},
    {0, -1},
    {0, 1},
};

bool operator<(Node v, Node t)
{
    return t.price < v.price;
}

priority_queue<Node> q;

int main()
{

    int startY = 1;
    int startX = 1;

    int endY = 3;
    int endX = 1;

    int map[4][4] = {
        {2, 2, 1, 1},
        {3, 1, 30, 1},
        {0, 20, 50, 1},
        {2, 5, 3, 0},
    };

    int result[4][4] = {0};

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            result[y][x] = MAX;
        }
    }

    result[startY][startX] = map[startY][startX];
    q.push({startY, startX, map[startY][startX]});

    while (!q.empty())
    {
        Node now = q.top();
        q.pop();
        if (result[now.y][now.x] < now.price)
            continue;
        for (int i = 0; i < 4; i++)
        {
            int dy = 0;
            int dx = 0;
            dy = now.y + direct[i][0];
            dx = now.x + direct[i][1];
            if (dy < 0 || dy > 3 || dx < 0 || dx > 3)
                continue;

            int total = now.price + map[dy][dx];

            if (result[dy][dx] > total)
            {
                result[dy][dx] = total;
                q.push({dy, dx, total});
            }
        }
    }

    cout << result[endY][endX] << endl;

    return 0;
}