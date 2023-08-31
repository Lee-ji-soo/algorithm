/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
    int n;
    int price;
};

// 인접리스트
vector<vector<Node>> alist(6);
priority_queue<Node> q;

int result[6];

bool operator<(Node v, Node t)
{
    return t.price < v.price;
}
void init()
{
    for (int i = 0; i < 6; i++)
        result[i] = 21e6;
    result[0] = 0;

    alist[0] = {{1, 5}, {2, 10}, {3, 7}};
    alist[1] = {{0, 5}, {5, 9}};
    alist[2] = {{5, 1}};
    alist[3] = {{4, 1}};
    alist[4] = {{5, 6}};

    q.push({0, 0});
}

int main()
{
    init();

    while (!q.empty())
    {
        Node now = q.top();
        q.pop();

        if (result[now.n] < now.price)
            continue;

        for (int i = 0; i < alist[now.n].size(); i++)
        {
            Node next = alist[now.n][i];

            int sum = now.price + next.price;
            if (result[next.n] > sum)
            {
                result[next.n] = sum;
                q.push({next.n, sum});
            }
        }
    }
    return 0;
}