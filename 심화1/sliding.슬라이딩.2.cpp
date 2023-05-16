/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string path = "ABABTABCABABAABA";
int cnt = 0;
string str = "";
string aba = "ABA";

int main()
{
    str = path.substr(0, 3);
    int limit = path.length() - aba.length();
    for (int i = 0; i <= limit; i++)
    {
        if (str == "ABA")
        {
            cnt++;
        }

        if (i == limit)
            break;
        str.erase(0, 1);
        str += path[i + aba.length()];
    }
    cout << cnt;
    return 0;
}