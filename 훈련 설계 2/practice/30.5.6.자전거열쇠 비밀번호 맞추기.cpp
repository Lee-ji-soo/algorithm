/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int a = 3;
string path = "0000";
string str[3] = {""};

int cnt = 0;
int flag = 0;
void run(string str, int lev)
{
    string s = str;
    if (path == s)
    {
        flag = 1;
    }

    if (lev == 4 || flag == 1)
    {
        cnt++;
        return;
    }

    for (int i = 'A'; i < 'Z' + 1; i++)
    {
        if (flag == 1)
            return;
        path[lev] = (char)i;
        run(str, lev + 1);
        path[lev] = '0';
    }
}

int main()
{
    cin >> a;
    for (int i = 0; i < 3; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < a; i++)
    {
        cnt = 0;
        flag = 0;
        run(str[i], 0);
        cout << cnt << endl;
    }
    return 0;
}