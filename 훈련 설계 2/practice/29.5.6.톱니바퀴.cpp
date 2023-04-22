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
int arr[3][4] = {
    3, 2, 5, 3,
    7, 6, 1, 6,
    4, 9, 2, 7};

int run[4] = {0};

void turn(int x)
{
    for (int i = 0; i < run[x]; i++)
    {
        int temp = 0;
        temp = arr[2][x];
        for (int y = 1; y >= 0; y--)
        {
            arr[y + 1][x] = arr[y][x];
        }
        arr[0][x] = temp;
    }
}

int main()
{

    for (int x = 0; x < 4; x++)
    {
        cin >> run[x];
    }

    for (int x = 0; x < 4; x++)
    {
        turn(x);
    }

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            cout << arr[y][x];
        }
        cout << endl;
    }

    return 0;
}
