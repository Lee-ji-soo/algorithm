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
    return boss;
}

void setBoss(int t1, int t2)
{
    int t1boss = findBoss(t1);
    int t2boss = findBoss(t2);

    if (t1boss == t2boss)
        return;
    myBoss[t2boss] = t1boss;
}

void query(int t1, int t2)
{
    int t1Boss = findBoss(t1);
    int t2Boss = findBoss(t2);

    if (t1Boss == t2Boss)
    {
        cout << "O";
    }
    else
    {
        cout << "X";
    }
}

int main()
{
    setBoss(1, 3);
    setBoss(4, 2);
    setBoss(9, 5);
    setBoss(1, 3);
    setBoss(1, 9);

    query(1, 2);
    query(1, 9);
    query(2, 4);

    return 0;
}