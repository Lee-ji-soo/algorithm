/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

int map[8];
int n = 0;
int path[8];
int used[8];
int maxi = -2e5;
int maxPath[8];
int direct[2] = {-1, 1};

void bomb(int map[8], int x)
{
    for (int i = 0; i < 2; i++)
    {
        int dx;
        dx = x + direct[i];
        if (dx < 0 || dx >= n)
            continue;
        map[dx] = -1;
    }
}

void run(int lev, int result)
{
    if (result > maxi)
    {
        maxPath[8] = {0};
        maxi = result;
        memcpy(maxPath, map, 8 * 4);
    }

    int backup[8];
    memcpy(backup, map, 8 * 4);
    for (int i = 0; i < n; i++)
    {
        if (map[i] > 0 && used[i] != 1)
        {
            used[i] = 1;
            bomb(map, i);
            run(lev + 1, result + map[i]);
            used[i] = 0;
            memcpy(map, backup, 8 * 4);
        }
    }
    return;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> map[i];
    }
    run(0, 0);
    std::priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < 8; i++)
    {
        if (maxPath[i] > 0)
        {
            q.push(maxPath[i]);
        }
    }

    int cnt = q.size();
    while (!q.empty())
    {
        int top = q.top();
        q.pop();
        cout << top;
        if (cnt != 1)
        {
            cout << "+";
        }
        cnt--;
    }
    cout << "=" << maxi;
}