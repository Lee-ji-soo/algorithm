/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int n = 0;
string arr[10];

void check(string str, int index)
{
    int len = str.length();

    int flag = 1;
    int C = 0;
    if (str[0] <= 'A' || str[0] >= 'Z')
    {
        flag = 0;
    }
    for (int i = 1; i < len; i++)
    {
        if (str[i] <= 'a' || str[i] >= 'z')
        {
            flag = 0;
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            flag = 0;
            C++;
        }
    }

    if (flag == 1)
    {
        return;
    }
    else if (C > 0)
    {
        for (int i = 0; i < len; i++)
        {
            arr[index][i] = toupper(arr[index][i]);
        }
    }
    else
    {
        arr[index][0] = toupper(arr[index][0]);
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        check(arr[i], i);
    }

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}