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

int map[6] = {1, 2, 3, 4, 5, 6};
int path[3] = {0};
void run(int lev, int sum)
{
    if (sum >= 10) // 가지치기
        return;
    if (lev == 3)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << path[i];
        }
        cout << " sum: " << sum << endl;
        return;
    }
    for (int i = 0; i < 6; i++)
    {
        path[lev] = map[i];
        run(lev + 1, sum + map[i]);
        path[lev] = 0;
    }
}

int main()
{
    run(0, 0);
    return 0;
}