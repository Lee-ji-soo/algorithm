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

vector<Node> times;

bool compare(Node t, Node v)
{
    if (t.end < v.end)
        return 1;
    if (t.end > v.end)
        return 0;
    return t.start < v.start;
};

int main()
{
    times.push_back({2, 4});
    times.push_back({5, 6});
    times.push_back({2, 5});
    times.push_back({3, 5});
    times.push_back({6, 7});
    times.push_back({1, 3});
    times.push_back({4, 7});

    sort(times.begin(), times.end(), compare);

    int count = 0;
    int last = 0;

    for (int i = 0; i < times.size(); i++)
    {
        if (last > times[i].start)
            continue;
        count++;
        last = times[i].end;
    }

    cout << count;
    return 0;
}