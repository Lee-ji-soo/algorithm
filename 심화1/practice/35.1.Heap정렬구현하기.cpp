/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

priority_queue<int> q;

int main()
{
    string str = "";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        q.push(str[i]);
    }

    while (!q.empty())
    {
        cout << (char)q.top();
        q.pop();
    }
    return 0;
}