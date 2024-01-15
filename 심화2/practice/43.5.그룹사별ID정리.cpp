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
    char group;
    int id;
};

int main()
{
    unordered_map<char, vector<int>> um;
    Node map[10] = {
        {'A', 21},
        {'E', 15},
        {'E', 6},
        {'A', 15},
        {'E', 34},
        {'B', 32},
        {'C', 35},
        {'C', 36},
        {'D', 14},
        {'A', 3},
    };

    for (int i = 0; i < 10; i++)
    {
        um[map[i].group].push_back(map[i].id);
    }
    char g;
    cin >> g;

    for (int i = 0; i < um[g].size(); i++)
    {
        cout << um[g][i] << " ";
    }
    return 0;
}