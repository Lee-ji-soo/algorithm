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

struct Node
{
    string name;
    int n;
};
int main()
{
    unordered_map<string, int> um;
    string map[3][2] = {
        "Jason", "Kim",
        "Jason", "Bob",
        "Tom", "So"};
    // 55 + 55 + 30 + -5 + -9 + 10

    Node ap[8] = {
        {"Chang", 15},
        {"Gop", 17},
        {"Jason", 55},
        {"Kim", 30},
        {"Bob", -5},
        {"Tom", -9},
        {"So", 10},
        {"Ju", -55},
    };

    for (int i = 0; i < 8; i++)
    {
        um[ap[i].name] = ap[i].n;
    }

    int sum = 0;
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 2; x++)
        {
            sum += um[map[y][x]];
        }
    }
    cout << sum;
}