/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>

using namespace std;


struct Node {
    int a;
    int b;
};

priority_queue<Node, vector<Node>> q;
//우선순위 
// 1. a가 큰것
// 2. b가 작은것

bool operator<(Node v, Node t){
    if(t.a > v.a) return 1;
    if(t.a > v.a) return 0;
    return t.b < v.b;  
}

int main()
{
    q.push({1, 23});
    q.push({4, 1});
    q.push({4, 2});
    q.push({24, 4});
    q.push({15, 5});
    q.push({4, 6});
    
    while(!q.empty()){
        cout << "a: "<< q.top().a << ", b: " << q.top().b << endl;
        q.pop();
    }
    
    return 0;
}
