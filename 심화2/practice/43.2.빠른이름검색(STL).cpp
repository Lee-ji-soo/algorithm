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
    unordered_map<string, int> um;
    um["POP"] = 1;
    um["TOM"] = 1;
    um["MC"] = 1;
    um["JASON"] = 1;
    um["KFC"] = 1;

    int n;
    cin >> n;
    string map[100];

    for (int i = 0; i < n; i++)
    {
        cin >> map[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (um.count(map[i]) == 0)
        {
            cout << "no";
        }
        else
        {
            cout << "yes";
        }
        cout << endl;
    }
}