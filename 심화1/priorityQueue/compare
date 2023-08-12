/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> q;

struct Node {
    int a;
    int b;
}
//1. 짝수 우선
//2. 작은수 우선
bool operator<(int v, int t){
    if(t.n % 2 == 0 && v.n % 2 == 1) return 1;
    if(t.n % 2 == 1 && v.n % 2 == 0) return 0;
    return t.n < v.n;    
}

int main()
{
    q.push(23);
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(4);
    
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    
    return 0;
}
