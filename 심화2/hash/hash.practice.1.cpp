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

struct NodeN
{
    string name;
    string nick;
    int age;
};

struct Node
{
    string call;
    int age;
};

int main()
{
    unordered_map<string, Node> um;
    NodeN map[3] = {
        {"name", "BOB", 42},
        {"nat", "net", 50},
        {"BBQ", "KFC", 30},
    };

    for (int i = 0; i < 3; i++)
    {
        um[map[i].name] = {map[i].nick, map[i].age};
        um[map[i].nick] = {map[i].name, map[i].age};
    }

    string in = "name";
    if (um.count(in) != 0)
    {
        cout << um[in].call << ", " << um[in].age;
    }
}