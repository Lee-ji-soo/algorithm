/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "";
    cin >> a;
    int sum = 0;
    int len = a.length();
    for (int i = 0; i < len; i++)
    {
        sum += a[i] - 'A' + 1;
    }

    while (true)
    {
        for (int i = 0; i < len; i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                cout << a[i];
            }
            else
            {
                cout << '_';
            }
        }
        cout << endl;

        if (sum <= 0)
        {
            break;
        }

        for (int i = 0; i < len; i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                a[i] = (char)(a[i] - 1);
                sum -= 1;
            }
        }
    }
    return 0;
}
