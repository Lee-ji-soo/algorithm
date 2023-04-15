/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int isValid(string a)
{
    if (a.length() < 2 || a.length() > 5)
    {
        return 0;
    }

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= (int)'a' && a[i] <= (int)'z')
            continue;
        if (a[i] >= 0 && a[i] <= 9)
            continue;
        return 0;
    }

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= (int)'A' && a[i] <= (int)'Z')
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string a = "";
    cin >> a;

    int flag = 0;
    flag = isValid(a);
    cout << flag;
    return 0;
}