/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string a = "";
    cin >> a;

    for (int i = 0; i < a.length(); i++)
    {
        a[i] = toupper(a[i]);
    }

    int passIndex = -1;
    int failIndex = -1;

    float pass = 0;
    float fail = 0;

    while (1)
    {
        failIndex = a.find("FAIL", failIndex + 1);
        if (failIndex == -1)
            break;
        fail++;
    }

    while (1)
    {
        passIndex = a.find("PASS", passIndex + 1);
        if (passIndex == -1)
            break;
        pass++;
    }
    cout << floor((pass / (pass + fail)) * 100) << '%';

    return 0;
}