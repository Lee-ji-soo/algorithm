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
#include <string>
using namespace std;

enum
{
    S = 1,
    O = 2,
    MAXS = 3,
    MAXO = 4,
};

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

string strings[7] = {
    "0001200",
    "0200000",
    "0010012",
    "0000000",
    "1001000",
    "0200010",
    "0010200"};

int map[7][7] = {0};
int used[7][7] = {0};
int pass = 1;
int flood(int y, int x, int lev)
{

    while (!q.empty())
    {
        q.pop();
    }
    for (int y = 0; y < 7; y++)
    {
        for (int x = 0; x < 7; x++)
        {
            used[y][x] = 0;
        }
    }

    q.push({y, x, lev});
    used[y][x] = map[y][x];

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        for (int y = 0; y < 4; y++)
        {
            int dy = 0;
            int dx = 0;

            dy = now.y + direct[y][0];
            dx = now.x + direct[y][1];
            if (dy < 0 || dx < 0 || dy >= 7 || dx >= 7)
                continue;
            if (used[dy][dx] != 0)
                continue;
            if (map[dy][dx] != 0 && map[dy][dx] != used[now.y][now.x])
                continue;

            if (map[dy][dx] == S)
            {
                if (now.lev < MAXS - 1)
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }

            if (map[dy][dx] == O)
            {
                if (now.lev < MAXO - 1)
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            used[dy][dx] = used[now.y][now.x];
            q.push({dy, dx, now.lev + 1});
            int z = 0;
        }
    }
    return 0;
};

int main()
{
    for (int y = 0; y < 7; y++)
    {
        string a;
        cin >> a;
        for (int x = 0; x < 7; x++)
        {
            map[y][x] = a[x] - '0';
        }
    }
    for (int y = 0; y < 7; y++)
    {
        for (int x = 0; x < 7; x++)
        {
            if (map[y][x] != 0)
            {
                pass = flood(y, x, 0);
                if (pass == 0)
                {
                    cout << "fail";
                    return 0;
                }
            }
        }
    }

    cout << "pass";
    return 0;
}
