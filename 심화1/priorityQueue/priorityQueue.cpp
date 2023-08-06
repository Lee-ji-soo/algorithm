/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

// STL Standard Template Library
priority_queue<int> q; // 기본-우선순위:큰것우선

int main()
{
    q.push(7);
    q.push(3);
    q.push(1);
    q.push(2);
    // 4 logN;

    cout << q.top();
    q.pop();
    // 7

    cout << q.top();
    q.pop();
    // 3

    cout << q.top();
    q.pop();
    // 2

    cout << q.top();
    q.pop();
    // 1
}

// 배열로 구현 (pq는 heap으로 구현되있음)
int vect[100];
int sp;

void push(int n)
{
    vect[sp++] = n;
}
int top()
{
    int max = 0;
    for (int i = 0; i < sp; i++)
    {
        if (vect[i] > max)
            max = vect[i];
    }
    return max;
}

void pop()
{
    int max = 0;
    for (int i = 0; i < sp; i++)
    {
        if (vect[i] > max)
            max = vect[i];
    }
    for (int i = 0; i < sp; i++)
    {
        if (vect[i] == max)
            vect[i] = -1;
    }
}
