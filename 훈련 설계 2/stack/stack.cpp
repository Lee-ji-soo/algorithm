/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(30);
    s.push(50);
    s.push(90);

    s.pop();
    cout << s.top();

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

int arr[10];
int sp = 0;

void push(int n)
{
    arr[sp++] = n;
}
int top()
{
    return arr[--sp];
}

void pop()
{
    arr[--sp] = 0;
}

int main()
{
    push(3);
    cout << top();
    pop();
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

vector<int> st;

void push(int i)
{
    st.push_back(i);
}

int top()
{
    return st[st.size() - 1];
}

void pop()
{
    st.pop_back();
}

int main()
{
    push(3);
    push(4);
    push(5);

    cout << top(); // 5
    pop();
    cout << top(); // 4
    return 0;
}