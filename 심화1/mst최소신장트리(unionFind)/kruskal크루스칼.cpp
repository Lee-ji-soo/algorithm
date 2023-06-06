#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// MST 최소 신장트리 minimum spanning tree 를 구하는 알고리즘
// 크루스칼 알고리즘
// 1. 사이클이 없어야 한다.
// 2. 적은비용을 탐색해야 한다.
int myBoss[100] = {0};
int makeGroupCnt = 0;
int sum = 0;

int findBoss(int n)
{
    if (myBoss[n] == 0)
    {
        return n;
    }
    int boss = findBoss(myBoss[n]);
    return boss;
}

void setBoss(int t1, int t2, int s)
{
    int a = findBoss(t1);
    int b = findBoss(t2);

    if (a == b)
        return;
    myBoss[b] = a;
    sum += s;
    makeGroupCnt++;
};

struct Node
{
    string ch;
    int n;
};

int compare(Node a, Node b)
{
    return a.n < b.n;
}

int main()
{
    int n = 8;

    vector<Node> gg;
    gg = {
        {"AB", 3},
        {"AC", 5},
        {"BC", 2},
        {"BD", 1},
        {"AD", 15},
        {"CD", 2},
        {"ED", 3},
        {"EC", 6},
    };

    sort(gg.begin(), gg.end(), compare);

    for (int i = 0; i < n; i++)
    {
        if (makeGroupCnt == 4)
        {
            break;
        };

        int t1 = gg[i].ch[0];
        int t2 = gg[i].ch[1];
        int a = findBoss(t1);
        int b = findBoss(t2);

        if (a == b)
            continue;

        setBoss(t1, t2, gg[i].n); // 8
    }
    cout << sum;
    return 0;
}