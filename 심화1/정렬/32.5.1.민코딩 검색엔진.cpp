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
    string arr[6] = {
        "ABCD",
        "ABCE",
        "AGEH",
        "EIEI",
        "FEQE",
        "ABAD"};

    string a = "";
    cin >> a;

    int cnt = 0;
    for (int y = 0; y < 6; y++)
    {
        int len = arr[y].length();
        int flag = 1;
        for (int x = 0; x < len; x++)
        {
            if (a[x] == '?')
                continue;
            if (a[x] != arr[y][x])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
