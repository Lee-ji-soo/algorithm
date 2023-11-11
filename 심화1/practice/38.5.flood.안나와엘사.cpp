
#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

struct Node
{
    int ely, elx, any, anx, lev;
};
int main()
{
    int n;
    cin >> n;

    int used[5][5][5][5] = {0};
    char map[5][5];

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int x = 0; x < n; x++)
        {
            map[i][x] = str[x];
        }
    }

    queue<Node> q;
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    Node start = {a, b, c, d, 0};

    q.push(start);
    used[start.any][start.anx][start.ely][start.elx] = 1;

    int andir[5][2] = {{-1, 0}, {1, 0}, {0, 0}, {0, 1}, {0, -1}};
    int eldir[8][2] = {
        {-1, 0}, {0, 1}, {1, 0}, {0, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, -1}};
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        for (int at = 0; at < 5; at++)
        {
            int ay, ax;
            ay = now.any + andir[at][0];
            ax = now.anx + andir[at][1];

            if (ay < 0 || ax < 0 || ay >= n || ax >= n)
                continue;
            if (map[ay][ax] == '#')
                continue;
            int zz = 0;

            if (
                now.ely + 3 > now.any && now.ely - 3 < now.any && now.elx + 3 > now.anx && now.elx - 3 < now.anx)
            {
                for (int et = 0; et < 4; et++)
                {
                    int ey, ex;
                    ey = now.ely + eldir[et][0];
                    ex = now.elx + eldir[et][1];

                    if (used[ay][ax][ey][ex] != 0)
                        continue;
                    if (ey < 0 || ex < 0 || ey >= n || ex >= n)
                        continue;
                    if (map[ey][ex] == '#')
                        continue;
                    if (ey == ay && ex == ax)
                    {
                        cout << now.lev + 1 << " sec";
                        return 0;
                    };
                    q.push({ey, ex, ay, ax, now.lev + 1});
                    used[ay][ax][ey][ex] = 1;
                    int zz = 0;
                }
            }
            else
            {
                for (int et = 0; et < 8; et++)
                {
                    int ey, ex;
                    ey = now.ely + eldir[et][0];
                    ex = now.elx + eldir[et][1];

                    if (used[ay][ax][ey][ex] != 0)
                        continue;
                    if (ey < 0 || ex < 0 || ey >= n || ex >= n)
                        continue;
                    if (map[ey][ex] == '#')
                        continue;
                    if (ey == ay && ex == ax)
                    {
                        cout << now.lev + 1 << " sec";
                        return 0;
                    };
                    q.push({ey, ex, ay, ax, now.lev + 1});
                    used[ay][ax][ey][ex] = 1;
                    int zz = 0;
                }
            }
        }
    }
    return 0;
}
