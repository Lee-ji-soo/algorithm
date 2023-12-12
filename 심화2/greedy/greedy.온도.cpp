/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

struct Node
{
    int start, end;
};

vector<Node> temp;

bool compare(Node t, Node v)
{
    return t.start < v.start;
};

int main()
{
    temp.push_back({0, 10});
    temp.push_back({5, 25});
    temp.push_back({20, 30});
    temp.push_back({15, 35});

    sort(temp.begin(), temp.end(), compare);

    int count = 1;
    int start = 0;
    start = temp[3].start;

    for (int i = temp.size() - 1; i >= 0; i--)
    {
        if (start >= temp[i].start && temp[i].end >= start)
            continue;
        else
        {
            start = temp[i].start;
            count++;
        }
    }

    cout << count;
    return 0;
}