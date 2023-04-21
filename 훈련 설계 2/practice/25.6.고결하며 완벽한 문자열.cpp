/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int isPure(string str)
{
    int dat[100] = {0};
    int len = str.length();
    if (len == 1)
    {
        return 1;
    }
    for (int i = 0; i < len; i++)
    {
        dat[str[i]]++;
        if (dat[str[i]] == 2)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n = 0;
    cin >> n;

    string str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for (int i = 0; i < n; i++)
    {
        int opener = -1;
        int closer = -1;

        int flag = 0;

        while (1)
        {
            opener = str[i].find("<", opener + 1);
            closer = str[i].find(">", opener + 1);

            if (opener == -1)
            {
                break;
            }

            string temp = str[i].substr(opener + 1, closer - opener - 1);
            flag = isPure(temp);
            if (flag == 0)
            {
                break;
            }
            opener = closer;
        }
        if (flag == 1)
        {
            cout << "O";
        }
        else
        {
            cout << "X";
        }
    }

    return 0;
}