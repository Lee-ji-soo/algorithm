// 그룹이 총 몇개인지 카운트
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int myBoss[10] = {0};
int sum[10] = {0};
int total[10] = {0};
int totalCnt;
int groupCnt;

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
    if (total[t1] == 0)
    {
        totalCnt++;
        total[t1] = 1;
    }
    if (total[t2] == 0)
    {
        totalCnt++;
        total[t2] = 1;
    }

    int a = findBoss(t1);
    int b = findBoss(t2);

    if (a == b)
        return;
    myBoss[b] = a;
    groupCnt++;
    sum[a] += sum[b];
    sum[b] = 0;
};

int getCount(int n)
{
    int t = findBoss(n);
    return sum[t];
}

int main()
{
    for (int i = 0; i < 10; i++)
        sum[i] = 1;

    setBoss(1, 3);
    setBoss(4, 2);
    setBoss(9, 5);
    setBoss(1, 3);
    setBoss(1, 9);

    cout << totalCnt - groupCnt;
    return 0;
}