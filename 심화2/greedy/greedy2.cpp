/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int price = 1750;

    int result = 0;

    int dong[4] = {500, 100, 50, 10};

    for (int i = 0; i < 4; i++)
    {
        result += (price / dong[i]);
        price = price % dong[i];
        int z = 0;
    }

    cout << result;
    return 0;
}