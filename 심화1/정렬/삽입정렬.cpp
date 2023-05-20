/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5] = {4, 5, 1, 6, 3};

    int result[5] = {0};
    int tail = 0;

    for (int y = 0; y < 5; y++)
    {
        result[y] = arr[y];

        for (int x = y; x > 0; x--)
        {
            if (result[x - 1] > result[x])
            {
                swap(result[x - 1], result[x]);
            }
            else
            {
                break;
            }
        }
    }

    for (int y = 0; y < 5; y++)
    {
        cout << result[y];
    }
}
