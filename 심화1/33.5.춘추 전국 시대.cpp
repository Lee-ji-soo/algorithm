// 그룹이 총 몇개인지 카운트
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int myBoss[200] = {0};
int myBossCnt[200] = {0};
int sum[200] = {0};

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
    myBossCnt[a]++;
    sum[a] += sum[b];
    sum[b] = 0;
};

struct Node
{
    string al;
    char a;
    char b;
};

int main()
{

    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        myBossCnt[i + 'A'] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        int m = 0;
        cin >> m;
        sum[i + 'A'] = m;
    }

    int m = 0;
    cin >> m;
    vector<Node> vect;

    for (int i = 0; i < m; i++)
    {
        string c;
        char a, b;
        cin >> c >> a >> b;
        vect.push_back({c, a, b});
    }
    for (int i = 0; i < m; i++)
    {
        int v = findBoss(vect[i].a);
        int w = findBoss(vect[i].b);

        if (vect[i].al == "war")
        {
            int vsum = sum[v];
            int wsum = sum[w];

            if (vsum < wsum)
            {
                cout << 7 - myBossCnt[v];
                return 0;
            }
        }

        if (v == w)
            continue;
        setBoss(v, w);
    }

    return 0;
}