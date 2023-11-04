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
// 모든 건물에 가스가 살포되는 초 구하기
//  2:가스
//  1:건물

struct Node
{
    int y;
    int x;
    int lev;
};
int direct[4][2] = {
    {-1, 0},
    {1, 0},
    {0, 1},
    {0, -1}};

int main()
{
    queue<Node> q;

    int map[4][7] = {
        {0, 1, 1, 1, 1, 0, 1},
        {0, 0, 0, 2, 1, 0, 1},
        {2, 1, 0, 0, 0, 0, 0},
        {1, 1, 1, 0, 2, 2, 0},
    };

    int used[4][7] = {0};
    int maxi = -2e4;

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 7; x++)
        {
            if (map[y][x] == 2)
            {
                q.push({y, x, 0});
                used[y][x] = 1;
            }
        }
    }
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
            if (dy < 0 || dx < 0 || dy >= 4 || dx >= 7)
                continue;
            if (used[dy][dx] > 0)
                continue;
            if (map[dy][dx] == 1)
            {
                if (maxi < now.lev + 1)
                {
                    maxi = now.lev + 1;
                }
            }
            used[dy][dx] = now.lev + 1;
            q.push({dy, dx, now.lev + 1});
        }
    }
    cout << maxi;
    return 0;
}
