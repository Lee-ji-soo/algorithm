/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string path[3] = {""};
string arr[2] = {"승", "패"};

void getCount(string path[3])
{
    int win = 0;
    int fail = 0;
    for (int i = 0; i < 3; i++)
    {
        if (path[i] == "승")
        {
            win++;
        }
        else
        {
            fail++;
        }
    }

    if (win == 0)
    {
        cout << fail << "패";
    }
    else if (fail == 0)
    {
        cout << win << "승";
    }
    else
    {
        cout << win << "승" << fail << "패";
    }
}

void abc(int lev)
{
    if (lev == 3)
    {
        getCount(path);
        cout << '(';
        for (int i = 0; i < 3; i++)
        {
            cout << path[i];
        }
        cout << ')' << endl;
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        path[lev] = arr[i];
        abc(lev + 1);
    }
}

int main()
{
    abc(0);
    return 0;
}