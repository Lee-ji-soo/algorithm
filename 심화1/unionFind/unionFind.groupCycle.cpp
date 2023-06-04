#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// 사이클 판별여부
// 양방향일때만 가능

int myBoss[100] = {0};
int makeGroupCnt = 0;

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
    int n = 5;

    char gg[n][3] = {
        {'A', 'B'},
        {'B', 'C'},
        {'C', 'D'},
        {'D', 'A'},
    };

    for (int i = 0; i < n; i++)
    {
        int y = gg[i][0];
        int x = gg[i][1];

        if (findBoss(y) == findBoss(x))
        {
            cout << "IT IS A CYCLE GRAPH!";
            return 0;
        }

        setBoss(y, x);
    }

    return 0;
}