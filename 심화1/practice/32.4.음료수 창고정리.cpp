/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> arr;

    for (int y = 0; y < 5; y++)
    {
        string a;
        cin >> a;
        arr.push_back(a);
    }

    int n[2] = {0};

    for (int i = 0; i < 2; i++)
    {
        cin >> n[i];
    }

    for (int y = 0; y < 5; y++)
    {
        if (y == n[0] || y == n[1])
        {
            sort(arr[y].begin(), arr[y].end());
        }
    }

    for (int y = 0; y < 5; y++)
    {
        cout << arr[y][0] << " ";
    }

    return 0;
}