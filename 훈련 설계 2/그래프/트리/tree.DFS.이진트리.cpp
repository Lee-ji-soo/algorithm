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

int a[100] = {0, 'A', 'B', 'T', 'R', 'S', 'V'};

void run(int num)
{
    if (a[num] == 0)
        return;
    cout << (char)(a[num]);
    run(num * 2);
    run(num * 2 + 1);
}

int main()
{
    run(1);
    return 0;
}