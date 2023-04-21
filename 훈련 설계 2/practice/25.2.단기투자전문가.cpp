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
    int len = str.length();

    if (len < 7)
        return 0;

    for (int i = 1; i < len - 1; i++)
    {
        int num = (int)str[i] - 48;
        if (num < 0 || num > 9)
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
    string arr[10] = {""};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int opener = -1;
        int closer = -1;
        while (1)
        {
            opener = arr[i].find("[", opener + 1);
            closer = arr[i].find("]", opener + 1);

            if (opener == -1)
            {
                break;
            }

            string temp = arr[i].substr(opener, closer - opener + 1);
            string q = temp;
            if (isValid(temp) == 1)
            {
                cout << temp << endl;
            }
            opener = closer;
        }
    }
    return 0;
}