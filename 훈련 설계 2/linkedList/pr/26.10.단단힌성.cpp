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
    int arr[4][4] = {
        0, 0, 0, 0,
        0, 1, 3, 0,
        2, 2, 2, 0,
        3, 3, 3, 1};

    int da = 6;
    int flag = 1;
    for (int x = 0; x < 4; x++)
    {
        for (int y = 3; y >= 0; y--)
        {
            if (da < arr[y][x])
            {
                flag = 0;
                break;
            }
            da = arr[y][x];
        }
        da = 6;
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 0)
    {
        cout << "안전하지않은성";
    }
    else
    {
        cout << "안전한성";
    }
    return 0;
}