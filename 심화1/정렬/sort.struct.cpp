/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int n;
    char c;
};

Node a[5] = {
    {3, 'A'},
    {4, 'C'},
    {9, 'D'},
    {9, 'H'},
    {9, 'A'}};

int compare(Node t, Node v)
{
    if (t.n > v.n)
    {
        return 1;
    }
    if (t.n < v.n)
    {
        return 0;
    }
    return t.c < v.c;
}

int main()
{
    sort(a, a + 5, compare);
    return 0;
}