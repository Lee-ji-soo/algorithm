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
    string name;
    int number;
    int salary;
};

string hashFunction(string name, int number)
{
    string a = "";
    a += name;
    a += '_';
    a += to_string(number);
    return a;
};

int main()
{
    unordered_map<string, int> um;
    Node map[6] = {
        {"Toto", 15, 4500},
        {"Son", 30, 6000},
        {"Tom", 15, 10000},
        {"Jason", 42, 15000},
        {"Bob", 30, 50000},
        {"Son", 60, 100},
    };

    for (int i = 0; i < 6; i++)
    {
        string hashCode = hashFunction(map[i].name, map[i].number);
        um[hashCode] = map[i].salary;
    };

    string name;
    int number;
    cin >> name >> number;

    string hashCode = hashFunction(name, number);
    cout << um[hashCode];
    return 0;
}