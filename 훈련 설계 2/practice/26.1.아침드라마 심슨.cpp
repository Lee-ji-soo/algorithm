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

int main()
{
    int a, b, c, d, e;
    int *simdata[5] = {&a, &b, &c, &d, &e};
    cin >> a >> b >> c >> d >> e;

    int max = -99;
    int min = 99;
    for (int i = 0; i < 5; i++)
    {
        if (*simdata[i] > max)
        {
            max = *simdata[i];
        }
        if (*simdata[i] < min)
        {
            min = *simdata[i];
        }
    }
    cout << "MAX:" << max << endl;
    cout << "MIN:" << min;
    return 0;
}