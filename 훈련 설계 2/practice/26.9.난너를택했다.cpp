/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string str = "";
    cin >> str;

    int data[4] = {0};
    for (int i = 0; i < 4; i++)
    {
        cin >> data[i];
    }

    int *ptrs[4];
    for (int i = 0; i < 4; i++)
    {
        ptrs[i] = &data[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << str[*ptrs[i]];
    }

    return 0;
}