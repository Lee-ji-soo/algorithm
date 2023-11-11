
#include <iostream>
#include <string.h>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
    int y, x, lev;
};
int a, b;
char map[10][10] = {};
int direct[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
Node bfs(Node s, int start, int end)
{
    int used[10][10] = {0};
    queue<Node> q;
    q.push(s);
    if ((map[s.y][s.x] - '0') == end)
        return s;
    used[s.y][s.x] = 1;
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();
        for (int t = 0; t < 4; t++)
        {
            int ny = now.y + direct[t][0];
            int nx = now.x + direct[t][1];
            if (ny < 0 || nx < 0 || ny >= a || nx >= b)
                continue;
            if (map[ny][nx] == '#')
                continue;
            if (used[ny][nx] != 0)
                continue;

            if ((map[ny][nx] - '0') == end)
            {
                return {ny, nx, now.lev + 1};
            }
            used[ny][nx] = now.lev + 1;
            q.push({ny, nx, now.lev + 1});
        }
    }
    return {-1, -1, -1};
};

queue<Node> tq;

int main()
{

    string str[10];
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> str[i];
    }

    for (int y = 0; y < a; y++)
    {
        for (int x = 0; x < b; x++)
        {
            map[y][x] = str[y][x];
        }
    }
    int result = 0;

    tq.push({0, 0, 0});
    int num = 0;
    while (!tq.empty())
    {
        Node now = tq.front();
        tq.pop();
        if (num == 4)
        {
            break;
        }

        Node temp = bfs(now, num, num + 1);
        result += temp.lev;
        tq.push({temp.y, temp.x, 0});
        num++;
    }

    cout << result << "회";
    return 0;
}
