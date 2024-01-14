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
    unordered_map<string, int> um;

    string map[4] = {"ABC", "ABC", "ABC", "BTS"};

    for (int i = 0; i < 4; i++)
    {
        if (um[map[i]] <= 0)
        {
            um[map[i]] = 1;
        }
        else
        {
            um[map[i]]++;
        }
    }

    int maxi = -2e5;
    string maxiKey = "";
    for (auto i = um.begin(); i != um.end(); ++i)
    {
        string key = i->first;
        int value = i->second;
        if (maxi < value)
        {
            maxi = value;
            maxiKey = key;
        }
    }

    cout << maxiKey;
}