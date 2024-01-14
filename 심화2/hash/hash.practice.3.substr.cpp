/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string str = "ABTTRSBCDEABABAABABABC";

    int len = str.length();
    unordered_map<string, int> um;

    for (int i = len - 4; i >= 0; i--)
    {
        string t;
        t = str.substr(i, 4);
        um[t] = i;
    }

    cout << um["CDEA"];
}