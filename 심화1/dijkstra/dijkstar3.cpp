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
    return t.price < v.price;
}

// dijkstra
int main()
{
    priority_queue<Node> q;

    vector<vector<Node>> alist(6);

    int result[6] = {0};

    alist[0] = {{1, 1}, {2, 1}, {3, 1}};
    alist[1] = {{2, 1}};
    alist[2] = {{3, 1}};
    alist[4] = {{3, 1}, {5, 1}};
    alist[5] = {{0, 1}};

    // 1,4
    int start, end;
    cin >> start >> end;

    q.push(alist[start][0]);

    int flag = 0;

    while (!q.empty())
    {
        Node now = q.top();
        q.pop();
        result[now.n] = 1;

        if (now.n == end)
        {
            flag = 1;
            break;
        }

        for (int i = 0; i < alist[now.n].size(); i++)
        {
            Node next = alist[now.n][i];
            result[next.n] = 1;
            q.push(next);
        }
    }

    flag = result[end] == 1;

    if (flag == 1)
    {
        cout << "O";
    }
    else
    {
        cout << "X";
    };

    return 0;
}