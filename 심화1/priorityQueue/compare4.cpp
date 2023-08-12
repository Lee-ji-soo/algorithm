/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>

using namespace std;


//우선순위 
// 1. 작은수
// 2. 큰문자

struct Node {
    int n;
    char ch;
};

priority_queue<Node, vector<Node>> q;

bool operator<(Node v, Node t){
    if(t.n < v.n) return 1;
    if(t.n > v.n) return 0;
    return t.ch > v.ch;
}

int n;
int main()
{
    n = 3;
    // n만큼 한개를 뺸 후 
    // x = x * 2 % 17;
    // push(x);
    
    q.push({9, 'A'});
    q.push({8, 'B'});
    q.push({9, 'A'});
    q.push({10, 'C'});
    q.push({15, 'A'});
    int p=1;
    for(int i=0; i<n; i++){
        Node x = q.top();
        q.pop();
        x.n = (x.n * 2) % 17;
        q.push(x);
    }
    //2A 9A 10C 15A 16B
    while(!q.empty()){
        cout << q.top().n << "," << q.top().ch << endl;
        q.pop();
    }
   return 0;
}
