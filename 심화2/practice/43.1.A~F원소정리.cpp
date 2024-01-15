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

string str = "";
string an = "ABCDEF";
int main()
{
    unordered_map<char, int> um;

    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        int a = str[i];
        if (a >= 'a' && a <= 'z')
        {
            a -= 32;
        }
        um[a]++;
    }

    for (int i = 0; i < an.length(); i++)
    {
        if (um.count(an[i]) == 0)
        {
            cout << an[i] << ":" << 0 << endl;
        }
        else
        {
            cout << an[i] << ":" << um[an[i]] << endl;
        }
    }
}