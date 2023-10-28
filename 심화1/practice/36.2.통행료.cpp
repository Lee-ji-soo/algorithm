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
    long long price;
};

bool operator<(Node v, Node t)
{
    return t.price - v.price;
}

long long MAX = 26e4;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    int A, B;
    cin >> A >> B;
    priority_queue<Node> q;
    vector<vector<Node>> alist(M + 1);

    int result[M + 1] = {0};
    int Kp[K + 1] = {0};

    for (int y = 0; y <= N; y++)
    {
        result[y] = MAX;
    }
    for (int y = 0; y < M; y++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        alist[a].push_back({b, c});
        alist[b].push_back({a, c});
    }

    for (int y = 1; y <= K; y++)
    {
        cin >> Kp[y];
    }

    q.push({A, 0});
    int year = 0;

    for (int z = 0; z <= K; z++)
    {
        year++;
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

        cout << result[B] << endl;
        for (int i = 0; i <= N; i++)
        {
            for (int x = 0; x < alist[i].size(); x++)
            {
                alist[i][x] = {alist[i][x].n, alist[i][x].price + Kp[year]};
            }
        }
        q.push({A, 0});
        for (int y = 0; y <= N; y++)
        {
            result[y] = MAX;
        }
    }

    return 0;
}