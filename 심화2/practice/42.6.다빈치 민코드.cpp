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

int map[40];
int path[40];
int used[40];
int m = 0;
int n = 0;
int mini = 2e5;
int miniPath[40];

int compare(int a, int b)
{
    return a < b;
}
void run(int lev, int start, int multi)
{
    if (lev == n)
    {
        if (mini > multi)
        {
            mini = multi;
            memcpy(miniPath, path, n * 4);
        }
        return;
    }

    for (int i = start; i < m; i++)
    {
        // if(used[i] == 1) continue;
        // used[i] = 1;
        path[lev] = map[i];
        run(lev + 1, i + 1, multi * map[i]);
        // used[i] = 0;
    }
}

int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> map[i];
    }
    run(0, 0, 1);
    sort(miniPath, miniPath + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << miniPath[i] << " ";
    }
}