/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

struct Node {
    string name;
    int len;
};

priority_queue<Node, vector<Node>> q;

//1.작은 길이
//2.사전순 앞에있는 이름

bool operator<(Node v, Node t){
    if(t.len < v.len) return 1;
    if(t.len > v.len) return 0;
    return t.name < v.name;
}

int main()
{
    q.push({"TOM", 2});
    q.push({"JASON", 1});
    q.push({"KFC", 3});
    q.push({"BBQ", 1});
    q.push({"MOMS", 2});
    q.push({"MC", 4});

    // 
    while(q.size() > 1){
        Node o = q.top();
        q.pop();
        Node t = q.top();
        q.pop();
        int z= 1;
        q.push({o.name, o.len + t.len});
        int x = 1;
    }
    
    // BBQ1, JASON1, MOMS2, TOM2, KFC3, MC4, 
    // BBQ2, MOMS2, TOM2, KFC3, MC4
    // TOM2, KFC3, BBQ4, MC4
    // BBQ4, MC4, TOM5
    // TOM5, BBQ8
    // TOM13
    
    while(!q.empty()){
        cout << q.top().name << q.top().len << endl;
        q.pop();
    }
    return 0;
}
