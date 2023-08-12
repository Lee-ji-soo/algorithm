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
// 1. 문자 작은것
// 2. 수가 큰것

struct Node {
    int i;
    char c;
};

priority_queue<Node, vector<Node>> q;

bool operator<(Node v, Node t){
    if(t.c < v.c) {
        return 1;
    }
    if(t.c > v.c) {
        return 0;
    }
    return t.i > v.i;
}

int main()
{
    q.push({7, 'A'});
    q.push({9, 'C'});
    q.push({7, 'C'});
    q.push({6, 'D'});
    q.push({5, 'A'});

    //7,a 5,a 9,c 7,c 6,d;

while(!q.empty()){
        cout << q.top().i << ',' << q.top().c <<endl;
        q.pop();

}    
    // for(int i=0;i<3;i++){
    //     cout << q.top().a << ',' << q.top().b <<endl;
    //     q.pop();
    // }
    return 0;
}
