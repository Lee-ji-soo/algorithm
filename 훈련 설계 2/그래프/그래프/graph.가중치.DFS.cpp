/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int arr[4][4] = {
    0,
    7,
    20,
    8,
    0,
    0,
    5,
    0,
    15,
    0,
    0,
    0,
    0,
    0,
    6,
    0,
};
int used[4] = {0};

void run(int now, int sum)
{
    int q = sum;
    int w = now;
    if (now == 2)
    {
        cout << sum << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[now][i] == 0)
            continue;
        if (used[i] == 1)
            continue;

        run(i, sum + arr[now][i]);
    }
}

int main()
{
    used[0] = 1;
    run(0, 0);
    return 0;
}