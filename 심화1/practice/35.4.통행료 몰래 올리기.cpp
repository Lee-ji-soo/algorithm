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
    int from;
    int to;
    int price;
};

priority_queue<Node, vector<Node>> q;

bool operator<(Node t, Node v)
{
    if (v.price == t.price)
    {

        if (v.from == t.from)
        {
            return v.to < t.to;
        }
        else
        {
            return v.from < t.from;
        }
    }
    return v.price < t.price;
}

int n = 0;
int map[10][10] = {0};

int main()
{

    cin >> n;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> map[y][x];
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = y; x < n; x++)
        {
            if (map[y][x] > 0)
            {
                q.push({y, x, map[y][x]});
            }
        }
    }

    int a = 0;

    for (int i = 0; i < 10; i++)
    {
        Node top = q.top();
        if (i == 9)
        {
            cout << top.price * 2 << "만원";
            break;
        }
        q.pop();
        q.push({top.from, top.to, top.price * 2});
    }
    return 0;
}