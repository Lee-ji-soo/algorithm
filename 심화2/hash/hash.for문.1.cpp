/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> um;
    um[1] = 10;
    um[2] = 20;
    um[3] = 30;
    um[4] = 40;

    for (auto i = um.begin(); i != um.end(); ++i)
    {
        cout << i->first << ", " << i->second << endl;
    }
    return 0;
}