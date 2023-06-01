#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int myBoss[10];

int findBoss(int n)
{
    if (myBoss[n] == 0)
    {
        return n;
    }

    int boss = findBoss(myBoss[n]);
    myBoss[n] = boss; // 나의 보스를 바꾸기. 경로 압축 !
    return boss;
}
void setBoss(int t1, int t2)
{
    int t1Boss = findBoss(t1);
    int t2Boss = findBoss(t2);

    if (t1Boss == t2Boss)
        return;
    myBoss[t2Boss] = t1Boss;
}

int main()
{
    setBoss(1, 2);
    setBoss(2, 3);
    setBoss(3, 4);

    int ret = findBoss(3);
    return 0;
}