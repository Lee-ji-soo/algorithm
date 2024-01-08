/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int n = 0;
string map;
char path[100];
void run(int lev, int start)
{
    if (lev == 3)
    {
        cout << path << endl;
        return;
    }

    for (int i = start; i < n; i++)
    {
        path[lev] = map[i];
        run(lev + 1, i);
    }
}
int main()
{
    cin >> map;
    n = map.length();
    run(0, 0);
}