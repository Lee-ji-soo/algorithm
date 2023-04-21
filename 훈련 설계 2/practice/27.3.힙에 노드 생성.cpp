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
    int K;
    cin >> K;

    for (int i = 1; i <= 4; i++)
    {
        addNode(K * i);
    }

    Node *i = head;
    while (true)
    {
        if (i == NULL)
        {
            break;
        }
        cout << i->x << " ";
        i = i->p;
    }
    return 0;
}