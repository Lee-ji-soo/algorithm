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
    string a = "ABCD";
    int map[4][4] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> map[i][j];
        }
    }
    int max = -99;
    int maxIndex = 0;

    for (int x = 0; x < 4; x++)
    {
        int temp = 0;
        for (int y = 0; y < 4; y++)
        {
            temp += map[y][x];
            if (max < temp)
            {
                max = temp;
                maxIndex = x;
            }
        }
    }

    cout << a[maxIndex];
    return 0;
}