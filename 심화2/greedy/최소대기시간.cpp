/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(100);
    q.push(50);
    q.push(20);
    q.push(30);
    q.push(70);

    int result = 0;
    while (!q.empty())
    {
        int top = q.top();
        q.pop();

        for (int i = 0; i < q.size(); i++)
        {
            result += top;
        }
    }

    cout << result;
    return 0;
}