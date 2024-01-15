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
    string str = "BOBOOBOBOBOBBM";
    unordered_map<string, int> um;

    int n = 0;
    cin >> n;

    string map[100];

    for (int i = 0; i < n; i++)
    {
        cin >> map[i];
    }

    for (int i = str.length() - 3; i >= 0; i--)
    {
        string temp = str.substr(i, 3);
        if (um.count(temp) == 0)
        {
            um[temp] = 1;
        }
        else
        {
            um[temp]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << um[map[i]] << endl;
    }
}