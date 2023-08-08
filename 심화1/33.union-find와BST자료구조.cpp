#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int myBoss[100];

int findBoss(char n)
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

    if (t2Boss >= 65)
    {
        myBoss[t1Boss] = t2Boss;
    }
    else
    {
        myBoss[t2Boss] = t1Boss;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> q;
    for (int i = 0; i < n; i++)
    {
        char t, w;
        cin >> t >> w;
        if ((int)t < 65)
        {
            t = t - '0';
        }
        if ((int)w < 65)
        {
            w = w - '0';
        }
        setBoss((int)t, (int)w);
    }

    for (int i = 1; i <= n; i++)
    {
        int a = findBoss(i);
        cout << (char)a;
    }
    return 0;
}