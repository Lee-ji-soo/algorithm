/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    string str[10] = {""};

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    int sum = 0;
    for (int y = 0; y < n - 1; y++)
    {
        for (int x = y + 1; x < n; x++)
        {
            if (str[y] + str[x] == "HITSMUSIC")
            {
                sum++;
            }
        }
    }

    cout << sum;
}
