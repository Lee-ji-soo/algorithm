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

int map[15] = {
    0, 0, 5, 10, -30, 5, 4, -20, -30, -50, 40, 1, 5, 4, 20};

struct Node
{
    int n, index;
};
Node getMax(Node a, Node b, Node c)
{
    if (a.n > b.n)
    {
        if (a.n > c.n)
        {
            return a;
        }
    }
    else
    {
        if (b.n > c.n)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
    return a;
}
int main()
{

    int i = 14;
    int sum = map[i];
    while (i >= 0)
    {
        if (i / 2 < 0 || i - 1 < 0 || i - 2 < 0)
            break;
        int a = map[i - 1];
        int b = map[i - 2];
        int c = map[i / 2];

        Node max = {0, 0};
        max = getMax({a, i - 1}, {b, i - 2}, {c, i / 2});
        sum += max.n;
        i = max.index;
    }
    cout << sum;
    return 0;
}