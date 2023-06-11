#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int myBoss[200] = {0};
int map[15][15] = {0};
int n = 0;
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

    cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> map[y][x];
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = y; x < n; x++)
        {
            if (map[y][x] == 0)
                continue;
            int a = findBoss(y + 65);
            int b = findBoss(x + 65);

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