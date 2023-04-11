/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string v = "BTSBBASKFCAASASASAAAA";
    int ret = v.find("KFC", 0);
    cout << ret;
    for (int i = ret; i < ret + 3; i++)
    {
        cout << v[i];
    }
    return 0;
}