/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

struct Node
{
    int from;
    int to;
    int price;
};

priority_queue<Node> q;

int n = 0;
string a = "ABCDEFGHIJKLMN";
int map[10][10] = {0};

bool operator<(Node t, Node v)
{
    return v.price > t.price;
};

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
        for (int x = 0; x < n; x++)
        {
            if (map[y][x] != 0)
            {
                q.push({y, x, map[y][x]});
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << a[q.top().from] << '-' << a[q.top().to] << " " << q.top().price << endl;
        q.pop();
    }

    return 0;
}