#include <iostream>
using namespace std;

int* myBoss;

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
    int n = 4;
    myBoss = new int[n + 1];
    fill_n(myBoss, n + 1, 0);

    int map[4][4] = {
        {0, 1, 0, 0},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {0, 0, 1, 0},
    };

    for (int y = 0; y < n; y++)
    {
        for (int x = y + 1; x < n; x++)  // x = y + 1부터 시작하여 중복 방지
        {
            if (map[y][x] == 0)
                continue;

            int a = findBoss(y);
            int b = findBoss(x);

            if (a == b)
            {
                cout << "Cycle detected" << endl;
                delete[] myBoss;
                return 0;
            }

            setBoss(a, b);
        }
    }

    cout << "No cycle found" << endl;
    delete[] myBoss;
    return 0;
}
