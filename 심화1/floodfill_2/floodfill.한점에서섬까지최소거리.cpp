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
    int lev;
};
queue<Node> q;

int main()
{

    int direct[4][2] = {
        {-1, 0},
        {1, 0},
        {0, 1},
        {0, -1}};

    int map[4][6] = {
        {0, 0, 0, 0, 0, 'B'},
        {0, 'A', 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 'B'},
        {0, 0, 0, 'B', 'B', 'B'},
    };

    int cnt = 0;

    q.push({1, 1, 0});
    map[1][1] = 1;
    int min = 26e2;
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
            if (dy < 0 || dx < 0 || dy >= 4 || dx >= 6)
                continue;
            if (map[dy][dx] == 1)
                continue;
            if (map[dy][dx] == 'B' + 0)
            {
                cout << now.lev;
                return 0;
            }
            map[dy][dx] = 1;
            q.push({dy, dx, now.lev + 1});
        }
    }
    cout << min;
    return 0;
}
