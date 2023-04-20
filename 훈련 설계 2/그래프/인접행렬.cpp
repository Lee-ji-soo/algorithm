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

int main()
{
    string a = "ABCDE";
    char ch = 'E';

    int num[5][5] = {
        0, 1, 0, 0, 0,
        0, 0, 1, 1, 0,
        0, 1, 0, 0, 0,
        0, 0, 0, 0, 0,
        0, 1, 0, 0, 0};

    for (int i = 0; i < 5; i++)
    {
        int tmep = ch - 65;
        if (num[tmep][i] == 1)
        {
            cout << (char)(i + 65);
        }
    }
    return 0;
}