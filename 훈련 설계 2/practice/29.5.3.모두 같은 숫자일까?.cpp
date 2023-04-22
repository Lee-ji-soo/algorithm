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

    int arr[3][3] = {0};

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int y = 0; y < 3; y++)
    {
        int temp = arr[y][0];
        int flag = 1;
        for (int x = 0; x < 3; x++)
        {
            if (temp != arr[y][x])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << temp << endl;
        }
        else
        {
            cout << 'x' << endl;
        }
    }
    return 0;
}
