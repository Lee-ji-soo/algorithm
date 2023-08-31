#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int myBoss[200] = {0};
int sum = 10;

char group = {

};

int findBoss(int n)
{
    if (myBoss[n] == 0)
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
    sum--;
}

int main()
{
    setBoss('A', 'B');
    setBoss('B', 'C');
    setBoss('D', 'E');
    setBoss('E', 'F');
    setBoss('I', 'J');
    setBoss('H', 'G');

    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char a, b;
        cin >> a >> b;

        int fa = findBoss(a);
        int fb = findBoss(b);

        if (fa == fb)
            continue;
        setBoss(fa, fb);
    }
    cout << sum << "개";
    return 0;
}