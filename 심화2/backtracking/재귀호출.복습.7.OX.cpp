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

int map[2] = {'O', 'X'};
int path[10] = {0};
int n = 0;

void run(int lev)
{
    if (lev == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << (char)path[i];
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        path[lev] = map[i];
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    cin >> n;
    run(0);
    return 0;
}