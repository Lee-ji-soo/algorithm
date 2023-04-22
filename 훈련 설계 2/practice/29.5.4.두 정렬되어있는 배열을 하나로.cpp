/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    int a[4] = {0};
    int b[4] = {0};
    int result[8] = {0};

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> b[i];
    }
    int aIndex = 0;
    int bIndex = 0;
    int rIndex = 0;
    while (true)
    {
        if (aIndex > 3 && bIndex > 3)
            break;
        if (aIndex > 3)
        {
            for (int i = bIndex; i < 4; i++)
            {
                result[rIndex++] = b[i];
            }
            break;
        }
        if (bIndex > 3)
        {
            for (int i = aIndex; i < 4; i++)
            {
                result[rIndex++] = a[i];
            }
            break;
        }

        if (a[aIndex] < b[bIndex])
        {
            result[rIndex++] = a[aIndex++];
        }
        else
        {
            result[rIndex++] = b[bIndex++];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
