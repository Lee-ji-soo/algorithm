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

int map[3][4] = {
    {4, 5, 9, -7},
    {-2, 6, 1, 5},
    {0, 3, 15, 7},
};
int used[3][4] = {0};

int path[3] = {0};
int miniPath[3] = {0};
int mini = 2e3;
int target = 100;

void run(int lev)
{
    if (lev == 3)
    {
        int a = path[0] * 1;
        int b = path[1] * 2;
        int c = path[2] * 3;
        int sum = a + b + c;
        int m = abs(sum - target);
        if (m < mini)
        {
            mini = m;
            memcpy(miniPath, path, 4 * 12);
        }
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (used[i][j] == 1)
                continue;
            used[i][j] = 1;
            path[lev] = map[i][j];
            run(lev + 1);
            used[i][j] = 0;
        }
    }
}

int main()
{
    run(0);
    cout << mini << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << miniPath[i] << ",";
    }
}