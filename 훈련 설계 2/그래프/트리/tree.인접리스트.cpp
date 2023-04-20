/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

// 나머지 0으로 초기화됨
int arr[6][6] = {
    0,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
};

void run(int n)
{
    cout << n;
    for (int i = 0; i < 6; i++)
    {
        if (arr[n][i] == 0)
            continue;
        run(i);
    }
}

int main()
{
    string s = "ABTQVX";
    run(0);
    return 0;
}
