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

char map[100];
char path[100];
int used[100] = {0};
int n = 3;
int cnt = 0;
void run(int lev, int start)
{
    if (lev == n)
    {
        cout << path << endl;
        cnt++;
    }
    for (int i = start; i < 6; i++)
    {
        if (used[i] == 1)
            continue;
        path[lev] = map[i];
        used[i] = 1;
        run(lev + 1, i);
        used[i] = 0;
        path[lev] = 0;
    }
}

int main()
{
    cin >> map;
    run(0, 0);
    cout << cnt;
}