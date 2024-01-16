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
#include <vector>

using namespace std;

struct Node
{
    char name;
    int count;
};

int main()
{
    unordered_map<char, int> um;
    Node map[10] = {
        {'B', 10},
        {'T', 15},
        {'S', 12},
        {'G', 15},
        {'O', 14},
        {'D', 13},
        {'Z', 16},
    };

    for (int i = 0; i < 10; i++)
    {
        um[map[i].name] = map[i].count;
    }

    char name;
    cin >> name;

    cout << um[name];
    return 0;
}