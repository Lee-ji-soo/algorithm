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
    priority_queue<int> queue;
    queue.push(10);
    queue.push(50);
    queue.push(100);
    queue.push(500);

    int sum = 1750;
    int n = 0;
    int count = 0;
    while (!queue.empty())
    {
        int top = queue.top();
        if (sum >= top)
        {
            n += top;
            sum -= top;
            count++;
        }
        else
        {
            queue.pop();
        }
    }

    cout << count;
    return 0;
}