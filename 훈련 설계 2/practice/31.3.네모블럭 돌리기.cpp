/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int a[3][3] = {0};

    int b[3][3] = {0};

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cin >> a[y][x];
        }
    }
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cin >> b[y][x];
        }
    }
    // int direction[8][2] = {
    //     0,0 => 2,0
    //     0,1 => 1,0,
    //     0,2 => 0,0,

    //     1,0 => 2,1,
    //     1,1 => 1,1
    //     1,2 => 0,1,

    //     2,0 => 2,2,
    //     2,1 => 1,2,
    //     2,2 => 0,2,
    // }

    int result[3][3] = {0};

    int count = 0;
    int flag = 1;
    while (true)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                int dy = 2 - x;
                int dx = y;
                result[dy][dx] = a[y][x];
            }
        }

        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                a[y][x] = result[y][x];
                if (a[y][x] != b[y][x])
                {
                    flag = 0;
                }
            }
        }

        count++;
        if (flag == 0)
        {
            flag = 1;
        }
        else
        {
            break;
        }
    }
    cout << count;
    return 0;
}
