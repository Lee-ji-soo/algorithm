/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n = 0;

struct Node
{
    int m;
    char t;
};

struct my_comparator
{
    // queue elements are vectors so we need to compare those
    bool operator()(Node a, Node b)
    {
        return a.m > b.m;
        if (a.t == 'g' && b.t == 'd')
            return 1;
        return 0;
    }
};

priority_queue<Node, vector<Node>, my_comparator> q;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m = 0;
        cin >> m;
        q.push({m, 'g'});
    }

    int cnt = 0;
    while (true)
    {
        int max = 0;
        for (int i = 0; i < 2; i++)
        {
            if (q.top().t == 'd')
            {
                cout << cnt;
                return 0;
            }
            else
            {
                max = q.top().m;
                cnt++;
                q.pop();
            }
        }
        q.push({max * 2, 'd'});
    }
    cout << cnt;
    return 0;
}
