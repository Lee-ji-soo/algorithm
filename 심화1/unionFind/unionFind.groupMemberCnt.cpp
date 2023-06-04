// 그룹내의 사람 수 카운트 하기.
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int myBoss[10] = {0};
int sum[10] = {0};

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

    int a1 = getCount(1);
    cout << a1; // 4

    int a2 = getCount(2);
    cout << a2; // 2

    int a3 = getCount(9);
    cout << a3; // 4

    return 0;
}