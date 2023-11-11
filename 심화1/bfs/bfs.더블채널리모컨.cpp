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

// BFS
struct Node
{
    int n;
    int lev;
};
queue<Node> q;
int main()
{
    int n = 7;
    int answer = 27;
    q.push({n - 1, 1});
    q.push({n + 1, 1});
    q.push({n * 2, 1});
    q.push({n / 2, 1});

    int used[1000] = {0};

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();
        if (used[now.n] == 1)
            continue;
        if (now.n == 27)
        {
            cout << now.lev;
            break;
        }
        used[now.n] = 1;
        q.push({now.n - 1, now.lev + 1});
        q.push({now.n + 1, now.lev + 1});
        q.push({now.n * 2, now.lev + 1});
        q.push({now.n / 2, now.lev + 1});
    }
    return 0;
}
