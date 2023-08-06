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

    while (!q.empty())
    {                    // heapSort
        cout << q.top(); // O(logN)
        q.pop();
    }

    // O(NlogN)
}
