#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int myBoss[10] = {0};

int find(int n)
{
    if (myBoss[n] == 0)
    {
        return n;
    }

    int ret = find(myBoss[n]);
    return ret;
}

void setBoss(int t1, int t2)
{
    int t1Boss = find(t1);
    int t2Boss = find(t2);

    if (t1Boss == t2Boss)
        return;
    myBoss[t2Boss] = t1Boss;
}

int main()
{
    setBoss(6, 7);
    setBoss(5, 6);
    setBoss(1, 2);

    if (find(2) == find(6))
    {
        cout << "같은 그룹";
    }
    else
    {
        cout << "다른 그룹";
    }

    int ret = find(7);

    return 0;
}