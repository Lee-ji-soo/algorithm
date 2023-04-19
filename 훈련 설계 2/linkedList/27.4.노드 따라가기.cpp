/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Node
{
    int x;
    Node *p;
};

Node *head;
Node *last;

void addNode(int n)
{
    if (head == NULL)
    {
        head = new Node();
        head->x = n;
        head->p = NULL;
        last = head;
    }
    else
    {
        last->p = new Node();
        last = last->p;
        last->x = n;
    }
}

int main()
{
    int c;
    cin >> c;

    c -= 11;
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = c; i < c + 4; i++)
    {
        addNode(a[i]);
    }

    for (Node *i = head; i != NULL; i = i->p)
    {
        cout << (char)i->x;
    }
    return 0;
}