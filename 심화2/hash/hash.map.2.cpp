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
unordered_map<string, int> umm;

string map[4] = {"KFC", "MC", "BBQ", "MOMS"};
int used[4];
string str = "MCFKC";
string path[2];

void run(int lev, string str)
{
    if (umm.count(str) == 1)
        return;
    umm.insert({str, 1});
    if (lev == 4)
    {
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (used[i] == 1)
            continue;
        used[i] = 1;
        path[lev] = map[i];
        run(lev + 1, str + map[i]);
        used[i] = 0;
    }
    return;
};

int main()
{
    run(0, "");

    if (umm.count("KFCBBQ") == 1)
    {
        cout << 'O';
    }
    else
    {
        cout << 'X';
    }
    return 0;
}