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
// 1.MaxHeap
priority_queue<int> maxq; // 기본-우선순위:큰것우선

int main()
{
    maxq.push(7);
    maxq.push(3);
    maxq.push(1);
    maxq.push(2);
    // 4 logN;

    cout << "maxHeap:";
    while (!maxq.empty())
    {                       // heapSort
        cout << maxq.top(); // O(logN)
        maxq.pop();
    }
    cout << endl;
    // O(NlogN)
}
