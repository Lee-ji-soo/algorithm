/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

string str = "";
char path[5] = "";
int a = 0;

void run(int lev)
{
    if (lev == a)
    {
        cout << path << endl;
        return;
    }

    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        path[lev] = str[i];
        run(lev + 1);
        path[lev] = '0';
    }
}

int main()
{
    cin >> str;
    cin >> a;
    run(0);
    return 0;
}