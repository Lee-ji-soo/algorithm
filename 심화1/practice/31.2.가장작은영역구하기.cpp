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
    int arr[100000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }
    int limit = n - 4;
    int min = sum;

    for (int i = 0; i <= limit; i++)
    {

        if (min > sum)
        {
            min = sum;
        }
        if (i == limit)
            break;

        sum -= arr[i];
        sum += arr[i + 4];
    }

    cout << min;
}
