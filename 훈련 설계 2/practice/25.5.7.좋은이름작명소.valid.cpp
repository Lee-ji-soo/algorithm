/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int isGood(string str)
{
    int dat[150] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] < 'a' || str[i] > 'z')
        {
            return 0;
        }

        dat[str[i]]++;
        if (dat[str[i]] == 3)
        {
            return 0;
        }
    }

    int sum = dat['a'] + dat['e'] + dat['i'] + dat['o'] + dat['u'];
    if (sum != 3)
    {
        return 0;
    }
    int q = 0;
    return 1;
}

int main()
{
    int n = 0;
    cin >> n;

    string alist[n] = {""};
    for (int i = 0; i < n; i++)
    {
        cin >> alist[i];
    }

    for (int i = 0; i < n; i++)
    {
        int flag = isGood(alist[i]);
        if (flag == 1)
        {
            cout << "good";
        }
        else
        {
            cout << "no";
        }
        cout << endl;
    }
}