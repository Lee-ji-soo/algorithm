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
int direct[4][2] = {
    -1, 0,
    1, 0,
    0, 1,
    0, -1};
struct Node
{
    int y;
    int x;
};
queue<Node> q;

int map[3][3] = {0};

int main()
{
    map[1][2] = 1;
    q.push({1, 2});

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        // 다음꺼 등록
        for (int t = 0; t < 4; t++)
        {
            int ny = now.y + direct[t][0];
            int nx = now.x + direct[t][1];

            if (ny < 0 || ny >= 3 || nx < 0 || nx >= 3)
                continue;
            if (map[ny][nx] != 0)
                continue;
            map[ny][nx] = map[now.y][now.x] + 1;
            q.push({ny, nx});
        }
    }
    return 0;
}