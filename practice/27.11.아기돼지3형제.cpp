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
    char arr[4][5] = {"_"};

    int position[3][2] = {0};

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 2; x++)
        {
            cin >> position[y][x];
        }
    }

    int direct[8][2] = {
        -1, 0,
        -1, 1,
        0, 1,
        1, 1,
        1, 0,
        1, -1,
        0, -1,
        -1, -1};

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            arr[y][x] = '_';
        }
    }
    for (int k = 0; k < 3; k++)
    {
        arr[position[k][0]][position[k][1]] = '#';
        for (int y = 0; y < 4; y++)
        {
            for (int x = 0; x < 4; x++)
            {
                for (int i = 0; i < 8; i++)
                {
                    int dy = 0;
                    int dx = 0;

                    dy = position[k][0] + direct[i][0];
                    dx = position[k][1] + direct[i][1];

                    if (dy < 0 || dy > 3 || dx < 0 || dx > 3)
                        continue;

                    arr[dy][dx] = '@';
                }
            }
        }
    }

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            cout << arr[y][x];
        }
        cout << endl;
    }

    return 0;
}