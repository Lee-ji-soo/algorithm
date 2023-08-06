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
// 2.MinHeap
priority_queue<int, vector<int>, greater<int>> minq;
int main()
{
    minq.push(8);
    minq.push(1);
    minq.push(2);
    minq.push(4);
    minq.push(2);
    minq.push(9);

    cout << "minHeap:";
    while (!minq.empty())
    {
        cout << minq.top();
        minq.pop();
    }
}
