/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int map[6] = {'A', 'B', 'T', 'R', 'S', 'V'};

void run(int n)
{
    if (n == 6)
    {
        cout << endl;
        return;
    }
    cout << (char)map[n];
    run(n + 1);
    cout << (char)map[n];
}
int main()
{
    run(0);
    return 0;
}