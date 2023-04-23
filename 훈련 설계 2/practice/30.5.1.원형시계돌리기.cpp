/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int rotate = 0;
    cin >> rotate;
    int r = ((rotate / 90) % 4);

    int arr[4] = {12, 9, 3, 6};
    for (int i = 0; i < 4; i++)
    {
        int temp = arr[i] - (3 * r);
        if (temp <= 0)
        {
            temp = temp + 12;
        }
        arr[i] = temp;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}