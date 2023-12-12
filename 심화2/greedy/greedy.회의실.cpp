/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int start, end;
};

priority_queue<Node> q;

bool operator<(Node v, Node t)
{
    return t.end < v.end;
};

int main()
{
    q.push({2, 4});
    q.push({5, 6});
    q.push({2, 5});
    q.push({3, 5});
    q.push({6, 7});
    q.push({1, 3});
    q.push({4, 7});

    int count = 0;
    int n = 0;
    while (!q.empty())
    {
        Node top = q.top();
        if (top.start >= n)
        {
            count++;
            n = top.end;
        }
        q.pop();
    }

    cout << count;
    return 0;
}