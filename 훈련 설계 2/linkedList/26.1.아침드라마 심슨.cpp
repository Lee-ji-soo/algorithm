/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <list>
using namespace std;

list<int> arr;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int max = -99;
    int min = 99;

    for (auto i = arr.begin(); i != arr.end(); ++i)
    {
        if (max < *i)
        {
            max = *i;
        }
        if (min > *i)
        {
            min = *i;
        }
    }

    cout << "MAX:" << max << endl;
    cout << "MIN:" << min;
    return 0;
}