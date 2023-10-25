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

bool operator<(Node v, Node t)
{
    return t.price - v.price;
}

int MAX = 26e4;

int main()
{
    int num = 0;
    int r = 0;
    cin >> num >> r;
    priority_queue<Node> q;
    vector<vector<Node>> alist(num);
    int result[num] = {0};
    for (int y = 0; y < r; y++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        alist[a].push_back({b, c});
    }
    q.push({0, 0});

    for (int i = 0; i < num; i++)
    {
        result[i] = MAX;
    }

    while (!q.empty())
    {
        Node now = q.top();
        q.pop();

        if (result[now.n] < now.price)
            continue;

        for (int i = 0; i < alist[now.n].size(); i++)
        {
            Node next = alist[now.n][i];
            int total = now.price + next.price;

            if (result[next.n] > total)
            {
                result[next.n] = total;
                q.push({next.n, total});
            }
        }
    }

    if (result[num - 1] == MAX)
    {
        cout << "impossible";
        return 0;
    }
    cout << result[num - 1];
    return 0;
}