// 7이 나오는 연속된 수의 크기는?
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int a[15] = {4, 5, 6, 1, 1, 3, 2, 6, 9, 1, 1, 2, 0, 3, 2};
int aSize = 15;

int run(int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    int limit = aSize - size;
    for (int i = 0; i <= limit; i++)
    {
        if (sum == 7)
            return 1;
        if (i == limit)
            break;

        sum -= a[i];
        sum += a[i + size];
    }

    return 0;
}

int main()
{
    for (int i = aSize; i >= 0; i--)
    {
        int isSeven = run(i);
        if (isSeven == 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}