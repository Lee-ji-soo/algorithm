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
    int y, x;
};

unordered_multimap<string, Node> umm;

string map[5] = {
    "ABCDE",
    "FGHIJ",
    "KLMOP",
    "BCDBCD",
    "ABAB"};

int main()
{
    string str = "BCD";
    int len = str.length();
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x <= map[y].length() - len; x++)
        {
            string temp;
            temp = map[y].substr(x, len);
            umm.insert({temp, {y, x}});
        }
    }

    auto uml = umm.equal_range(str);
    for (auto i = uml.first; i != uml.second; ++i)
    {
        cout << i->second.y << ", " << i->second.x << endl;
    }
    return 0;
}