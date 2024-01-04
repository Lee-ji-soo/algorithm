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

char map[3];
char path[3];
int used[3] = {0};

void run(int lev)
{
    if (lev == 3)
    {
        cout << path << endl;
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        if (used[i] == 1)
            continue;
        path[lev] = map[i];
        used[i] = 1;
        run(lev + 1);
        used[i] = 0;
    }
}
int main()
{
    for (int i = 0; i < 3; i++)
    {
        cin >> map[i];
    }
    run(0);
}