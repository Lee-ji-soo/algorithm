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

int C = 0;
int P = 0;
int K = 0;
int A = 0;
int B = 0;

long long MAX = 2e9;
long long result[100001] = {0};
priority_queue<Node> q;
bool operator<(Node t, Node v)
{
    return t.price > v.price;
}
vector<vector<Node>> alist(200000);

int dij(int start, int end, int p)
{
    q.push({start, p});
    result[start] = 0;
    for (int i = 0; i <= P; i++)
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
            if (total < result[next.n])
            {
                result[next.n] = total;
                q.push({next.n, total});
            }
        }
    }
    return result[end];
}

int main()
{
    cin >> C >> P >> K >> A >> B;
    for (int i = 0; i < C; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        alist[a].push_back({b, c});
        alist[b].push_back({a, c});
    }
    int a = dij(K, A, 0);
    int aa = dij(A, B, a);

    int b = dij(K, B, 0);
    int bb = dij(B, A, b);

    if (aa < bb)
    {
        cout << aa;
    }
    else
    {
        cout << bb;
    }

    return 0;
}