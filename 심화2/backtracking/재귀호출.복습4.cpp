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

void run(int lev)
{
    if (lev == 2)
    {
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        run(lev + 1);
    }
}

int main()
{
    run(0);
    return 0;
}