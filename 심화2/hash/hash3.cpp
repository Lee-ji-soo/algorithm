/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    int age, tall;
};

struct Human
{
    string name;
    Node info;
};

Human map[4] = {
    {"BOB", {20, 180}},
    {"MINCO", {30, 190}},
    {"COCO", {40, 178}},
    {"ZZ", {35, 175}},
};
int main()
{
    unordered_map<string, Node> um;
    for (int i = 0; i < 4; i++)
    {
        um[map[i].name] = map[i].info;
    }

    string name = "COCOZ";
    if (um.count(name) == 0)
    {
        cout << "There is no " << name << "'s info";
        return 0;
    }
    cout << um[name].age << ", " << um[name].tall;
    return 0;
}