
#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

struct Node
{
    int y, x;
    int lev;
};

char map[8][9];
int direct[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
queue<Node> sq;
int bfs()
{
    int used[8][9] = {0};
    while (!sq.empty())
    {
        Node now = sq.front();
        sq.pop();
        for (int t = 0; t < 4; t++)
        {
            int ny = now.y + direct[t][0];
            int nx = now.x + direct[t][1];
            if (ny < 0 || nx < 0 || ny >= 8 || nx >= 9)
                continue;
            if (used[ny][nx] != 0)
                continue;
            if (map[ny][nx] == '$')
            {
                return now.lev;
            }
            if (map[ny][nx] == '_')
            {
                used[ny][nx] = now.lev + 1;
                sq.push({ny, nx, now.lev + 1});
                int z = 0;
            }
        }
    }
    return -1;
}

int flood(int y, int x)
{
    queue<Node> q;
    int used[8][9] = {0};
    q.push({y, x, 1});

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        for (int t = 0; t < 4; t++)
        {
            int ny, nx;
            ny = now.y + direct[t][0];
            nx = now.x + direct[t][1];

            if (ny < 0 || nx < 0 || ny >= 8 || nx >= 9)
                continue;
            if (used[ny][nx] != 0)
                continue;
            if (map[ny][nx] == '_')
                continue;
            map[ny][nx] = '$';
            used[ny][nx] = 1;
            q.push({ny, nx, 1});
        }
    }
    return 1;
}

int main()
{

    for (int y = 0; y < 8; y++)
    {
        string a;
        cin >> a;
        for (int x = 0; x < 9; x++)
        {
            map[y][x] = a[x];
        }
    }

    int flag = 0;
    for (int y = 0; y < 8; y++)
    {
        if (flag == 1)
            continue;
        for (int x = 0; x < 9; x++)
        {
            if (flag != 1 && map[y][x] == '#')
            {
                flag = flood(y, x);
            }
        }
    }

    int z = 0;
    int min = 999;
    for (int y = 0; y < 8; y++)
    {
        for (int x = 0; x < 9; x++)
        {
            if (map[y][x] == '#')
            {
                sq.push({y, x, 0});
            }
        }
    }
    cout << bfs();
    return 0;
}
