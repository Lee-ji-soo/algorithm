#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int n;
    int price;
};

// bfs
int main()
{
    queue<Node> q;
    vector<vector<Node>> alist(6);

    int used[6] = {0};

    alist[0] = {{1, 1}, {2, 1}, {3, 1}};
    alist[1] = {{2, 1}};
    alist[2] = {{3, 1}};
    alist[4] = {{3, 1}, {5, 1}};
    alist[5] = {{0, 1}};

    // 1,4
    int start, end;
    cin >> start >> end;

    q.push({start, 1});
    used[start] = 1;

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        for (int i = 0; i < alist[now.n].size(); i++)
        {
            Node next = alist[now.n][i];

            if (used[next.n] == 1)
                continue;
            used[next.n] = 1;
            q.push(next);
        }
    }

    if (used[end] == 1)
    {
        cout << "O";
    }
    else
    {
        cout << "X";
    }

    return 0;
}