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

int n;
int arr[100][100];

void run(int now)
{
    cout << now << " ";

    for (int i = 0; i < n; i++)
    {
        if (arr[now][i] == 0)
            continue;
        run(i);
    }
}
int main()
{
    cin >> n;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    run(0);
    return 0;
}