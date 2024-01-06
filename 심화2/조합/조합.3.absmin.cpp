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
int spreadMap[12] = {0};
int path[3] = {0};
int used[12] = {0};
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

    for (int i = 0; i < 12; i++)
    {
        if (used[i] == 1)
            continue;
        used[i] = 1;
        path[lev] = spreadMap[i];
        run(lev + 1);
        used[i] = 0;
    }
}

int main()
{
    int i = 0;
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            spreadMap[i] = map[y][x];
            i++;
        }
    }
    run(0);
    cout << mini << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << miniPath[i] << ",";
    }
}