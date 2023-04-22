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

int arr[4][5] = {0};

int main()
{

    int yMin = 26e3;
    int yMax = -26e3;
    int xMin = 26e3;
    int xMax = -26e3;

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (arr[y][x] == 1)
            {
                if (yMin > y)
                {
                    yMin = y;
                }
                if (yMax < y)
                {
                    yMax = y;
                }

                if (xMax < x)
                {
                    xMax = x;
                }
                if (xMin > x)
                {
                    xMin = x;
                }
            }
        }
    }

    cout << '(' << yMin << ',' << xMin << ')' << endl;
    cout << '(' << yMax << ',' << xMax << ')' << endl;

    return 0;
}
