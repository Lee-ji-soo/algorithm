/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
struct Node
{
    int n;
    int lev;
};

int used[100001] = {0};

int main()
{
    queue<Node> q;
    int a, b;
    cin >> a >> b;
    q.push({a, 0});
    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        if (now.n == b)
        {
            cout << now.lev;
            break;
        }

        if (now.n - 1 >= 0 && used[now.n - 1] == 0)
        {
            q.push({now.n - 1, now.lev + 1});
            used[now.n - 1] = 1;
        }
        if (now.n + 1 <= 100000 && used[now.n + 1] == 0)
        {
            q.push({now.n + 1, now.lev + 1});
            used[now.n + 1] = 1;
        }
        if (now.n * 2 <= 100000 && used[now.n * 2] == 0)
        {
            q.push({now.n * 2, now.lev + 1});
            used[now.n * 2] = 1;
        }
        if (used[now.n / 2] == 0)
        { // && now.n / 2 >= 0 왜 이 체크를 안하는지?
            q.push({now.n / 2, now.lev + 1});
            used[now.n / 2] = 1;
        }
    }
    return 0;
}
