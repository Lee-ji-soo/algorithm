/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int start, end;
};
vector<Node> vec;

bool compare(Node t, Node v)
{
    return t.end < v.end;
};

int main()
{
    int num = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int a, b;
        cin >> a >> b;
        vec.push_back({a, b});
    }

    sort(vec.begin(), vec.end(), compare);

    int size = vec.size();
    int n = 1;
    int last = vec[0].end;
    for (int i = 1; i < size; i++)
    {
        if (vec[i].start < last)
            continue;
        last = vec[i].end;
        n++;
    };

    cout << n;
    return 0;
}