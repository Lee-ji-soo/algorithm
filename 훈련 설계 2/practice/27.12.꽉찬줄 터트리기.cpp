/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int arr[5][4] = {0};

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int y = 0; y < 5; y++)
    {
        int cnt = 0;
        for (int x = 0; x < 4; x++)
        {
            if (arr[y][x] == 1)
            {
                cnt++;
            }

            if (cnt == 4)
            {
                for (int i = y; i >= 1; i--)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        arr[i][j] = arr[i - 1][j];
                        int q = 1;
                    }
                }
            }
        }
    }

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            cout << arr[y][x] << " ";
        }
        cout << endl;
    }
    return 0;
}