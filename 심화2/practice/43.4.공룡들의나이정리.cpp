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

struct Node
{
    long long age;
    string name;
};

int hashFunction(long long number)
{
    int temp = number % 100;
    return temp;
}

int main()
{
    unordered_map<int, string> um;
    Node map[8] = {
        {1000000005, "Sour"},
        {1000000002, "Dav"},
        {1000000003, "Nica"},
        {1000000006, "Timer"},
        {1000000015, "Pico"},
        {1000000022, "Topisl"},
        {1000000013, "Whab"},
        {1000000009, "Hap"},
    };

    for (int i = 0; i < 8; i++)
    {
        int hashCode = hashFunction(map[i].age);
        um[hashCode] = map[i].name;
    }

    int n = 0;
    cin >> n;
    int hashCode = hashFunction(n);
    cout << um[hashCode];
}