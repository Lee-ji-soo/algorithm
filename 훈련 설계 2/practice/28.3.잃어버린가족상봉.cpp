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

string name = "ABCDEFGH";

int a[8][8] = {
    0,
    1,
    1,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
};

int main()
{
    char b = 0;
    cin >> b;

    int flag = 0;
    for (int y = 0; y < 8; y++)
    {
        if (a[y][b - 'A'] == 1)
        {
            for (int x = 0; x < 8; x++)
            {
                if (x == b - 'A' || a[y][x] == 0)
                    continue;
                flag = 1;
                cout << name[x] << " ";
            }
        }
    }
    if (flag == 0)
    {
        cout << "없음";
    }
    return 0;
}