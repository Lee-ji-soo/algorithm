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
#include <stack>
using namespace std;
int main()
{
    string pe = "AFCDE";

    // A:0
    // F:1
    // C:2
    // D:3
    // E:4

    int map[5][5] = {
        0,
        0,
        1,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        1,
        0,
        0,
        0,
        0,
        1,
        1,
        0,
        0,
        0,
        0,
        1,
        1,
        0,
    };

    cout << "A가 좋아하는 사람:";
    for (int i = 0; i < 5; i++)
    {
        if (map[0][i] == 1)
        {
            cout << pe[i];
        }
    }

    int arr[5] = {0};
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            arr[x] += map[y][x];
        }
    }

    int max = -99;
    int maxIndex = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << endl;
    cout << "가장 인기가 많은 사람: ";
    cout << pe[maxIndex];
    return 0;
}