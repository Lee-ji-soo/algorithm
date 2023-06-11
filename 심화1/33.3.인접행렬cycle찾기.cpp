#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int myBoss[200] = {0};

int n = 4;

int map[4][4] = {
    {0, 1, 0, 0},
    {1, 0, 1, 0},
    {0, 1, 0, 1},
    {0, 0, 1, 0},
};

int findBoss(int n)
{
    if (myBoss[n] == 0)
    {
        return n;
    }

    int boss = findBoss(myBoss[n]);
    return boss;
}

void setBoss(int a, int b)
{
    int af = findBoss(a);
    int bf = findBoss(b);

    if (af == bf)
        return;

    myBoss[bf] = af;
}

int main()
{
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (map[y][x] == 0)
                continue;
            int a = findBoss(y);
            int b = findBoss(x);

            if (a == b)
            {
                cout << "cycle 발견";
                return 0;
            }

            setBoss(a, b);
        }
    }
    cout << "미발견";
    return 0;
}