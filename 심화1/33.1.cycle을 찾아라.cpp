#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int myBoss[200] = {0};

int findBoss(int n)
{
    if (myBoss[n] != n && myBoss[n] == 0)
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
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char z, y;
        cin >> z >> y;
        int a = findBoss(z);
        int b = findBoss(y);

        if (a == b)
        {
            cout << "발견";
            return 0;
        }
        setBoss(a, b);
    }
    cout << "미발견";
    return 0;
}