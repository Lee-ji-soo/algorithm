/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <unordered_map>
using namespace std;

string map[4] = {"HA", "TT", "HA", "BB"};
string a = "HAZ";
int main()
{
    unordered_map<string, int> um; // 0 또는 1만 넣을 수 있습니다.
    for (int i = 0; i < 4; i++)
    {
        um[map[i]] = 1;
    }

    if (um.count(a) == 0)
    {
        cout << "X";
    }
    else
    {
        cout << "O";
    }
    return 0;
}