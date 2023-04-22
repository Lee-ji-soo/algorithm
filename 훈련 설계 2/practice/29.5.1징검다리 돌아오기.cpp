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

int a = 0;
int arr[9] = {3, 1, 2, 1, 3, 2, 1, 2, 1};
int jump = -1;

void run(int num)
{
    if (num >= 8)
    {
        cout << "도착 ";
        return;
    }

    if (num < 0)
    {
        return;
    }
    cout << arr[num] << " ";

    run(num + arr[num]);
    cout << arr[num] << " ";
}

int main()
{
    cin >> a;
    cout << "시작 ";
    run(jump + a);
    cout << "시작";
    return 0;
}
