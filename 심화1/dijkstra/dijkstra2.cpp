#include <iostream>
#include <queue>
using namespace std;

// dijkstra 가중치값이 있는 문제
int MAXI = 28e3;

struct Node
{
    int n;
    int price;
};

priority_queue<Node> q;

bool operator<(Node v, Node t)
{
    return t.price < v.price;
};

int result[4] = {0, MAXI, MAXI, MAXI};

vector<vector<Node>> alist(4);

int main()
{
    alist[0] = {{2, 20}, {1, 5}, {3, 30}};
    alist[1] = {{2, 10}, {3, 35}};
    alist[2] = {{0, 1}, {3, 20}};

    q.push({0, 0});

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
                q.push(next);
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
