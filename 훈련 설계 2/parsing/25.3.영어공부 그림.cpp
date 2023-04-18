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

int isValid(string str)
{
    if (str.length() == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    string str = "";
    cin >> str;
    str += "_";
    int index = -1;
    int a = 0;
    int cnt = 1;

    while (1)
    {
        index = str.find("_", index + 1);

        if (index == -1)
        {
            break;
        }
        string temp = str.substr(a, index - a);
        if (isValid(temp) == 1)
        {
            cout << cnt << '#' << temp << endl;
            cnt += 1;
        }
        a = index + 1;
        int q = a;
    }
    return 0;
}