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

int arr[6][6] = {
    0, 2, 6, 3, 0, 0,
    2, 0, 7, 4, 0, 0,
    6, 7, 0, 0, 0, 0,
    3, 4, 2, 0, 0, 0,
    0, 0, 1, 0, 0, 7,
    0, 0, 0, 0, 0, 0};
int used[6] = {0};

void run(int now)
{
    int q = now;
    cout << now;

    for (int i = 0; i < 6; i++)
    {
        if (used[i] == 1)
            continue;
        if (arr[now][i] == 0)
            continue;
        used[i] = 1;
        run(i);
        used[i] = 0;
    }
}
void run2(int now)
{
    int q = now;
    cout << now;

    for (int i = 0; i < 6; i++)
    {
        if (used[i] == 1)
            continue;
        if (arr[now][i] == 0)
            continue;
        used[i] = 1;
        run2(i);
        // used[i] = 0;
    }
}

int main()
{
    // run(4);
    run2(4);

    return 0;
}