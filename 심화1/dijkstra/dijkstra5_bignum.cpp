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
    int n;
    int price;
};

int MAX = 2e8;
priority_queue<Node> q;
bool operator<(Node v, Node t)
{
    return t.price > v.price;
}
vector<vector<Node>> alist(5);

int main()
{
    alist[0] = {{1, 8}, {4, 4}, {3, 10}};
    alist[1] = {{2, 1}};
    alist[2] = {{3, 2}};
    alist[4] = {{3, 5}, {2, 3}};
    int result[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        result[i] = MAX;
    }

    q.push({0, 0});

    while (!q.empty())
    {
        Node now = q.top();
        q.pop();

        for (int i = 0; i < alist[now.n].size(); i++)
        {
            Node next = alist[now.n][i];
            int bigNum = max(now.price, next.price);
            if (result[next.n] > next.price)
            {
                result[next.n] = bigNum;
                q.push({next.n, bigNum});
            }
        }
    }

    cout << result[1];
    return 0;
}