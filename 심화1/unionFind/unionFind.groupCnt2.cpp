#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int myBoss[10] = {0};
int makeGroupCnt = 0;
int map[10][10];

int findBoss(int n)
{
    if (myBoss[n] == 0)
    {
        return n;
    }
    int boss = findBoss(myBoss[n]);
    return boss;
}

void setBoss(int t1, int t2)
{
    int a = findBoss(t1);
    int b = findBoss(t2);

    if (a == b)
        return;
    myBoss[b] = a;
    makeGroupCnt++;
};

int main()
{
    int cnt = 0;
    int n = 7;

    int gg[n][2] = {
        1,
        1,
        1,
        2,
        2,
        3,
        2,
        4,
        3,
        2,
        4,
        2,
        2,
        2,
    };

    for (int i = 0; i < n; i++)
    {
        int y = gg[i][0];
        int x = gg[i][1];

        map[y][x] = ++cnt;

        int direct[4][2] = {
            -1, 0, // top
            1, 0,  // bottom
            0, 1,  // right
            0, -1, // left
        };

        for (int t = 0; t < 4; t++)
        {
            int dy = y + direct[t][0];
            int dx = x + direct[t][1];
            if (dy < 0 || dy >= 10 || dx < 0 || dx >= 10)
                continue;
            if (map[dy][dx] == 0)
                continue;
            setBoss(map[y][x], map[dy][dx]);
            printf("%d - %d = %d\n", cnt, makeGroupCnt, cnt - makeGroupCnt);
        }
    }

    cout << 7 - makeGroupCnt;
    return 0;
}