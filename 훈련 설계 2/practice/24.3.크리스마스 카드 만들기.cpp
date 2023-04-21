/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

string path[4] = {""};
int num = 0;
int cnt = 0;
string arr[100] = {""};

void christmas(int lev)
{
    if (lev == 4)
    {
        string str = "";
        for (int i = 0; i < 4; i++)
        {
            str += path[i];
        }
        if (str == "CHRISTMAS")
        {
            cnt += 1;
        }
        str = "";
        return;
    }

    for (int i = 0; i < num; i++)
    {
        path[lev] = arr[i];
        christmas(lev + 1);
    }
}

int main()
{
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    christmas(0);
    cout << cnt;
    return 0;
}