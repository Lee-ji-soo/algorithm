/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

string map[6] = {"BTS", "SES", "SBS", "BS", "CBS", "SES"};
string target = "";
int cnt;
int minLev = 6;
void run(int lev, string str)
{
    if (str.length() > 0 && str[0] != target[0])
    {
        return;
    };
    if (str.length() > target.length())
    {
        return;
    }
    if (str.length() > 30)
    {
        return;
    }
    if (str == target)
    {
        if (minLev > lev)
        {
            minLev = lev;
        }
        return;
    }

    for (int i = 0; i < 6; i++)
    {
        string temp = str + map[i];
        run(lev + 1, temp);
    }
}

int main()
{
    cin >> target;
    run(0, "");
    cout << minLev;
}