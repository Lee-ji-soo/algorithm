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
    string name[5] = {
        "Amy",
        "Bob",
        "Chloe",
        "Edger",
        "Diane"};

    int a[5][5] = {
        0, 0, 0, 1, 0,
        1, 0, 0, 0, 0,
        0, 1, 0, 0, 0,
        0, 0, 0, 0, 0,
        0, 1, 0, 0, 0};

    int max = -99;
    int maxIndex = 0;

    for (int x = 0; x < 5; x++)
    {
        int cnt = 0;
        for (int y = 0; y < 5; y++)
        {
            cnt += a[y][x];
        }
        if (max < cnt)
        {
            max = cnt;
            maxIndex = x;
        }
    }
    cout << name[maxIndex];
    return 0;
}