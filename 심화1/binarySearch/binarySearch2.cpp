/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int target = 9;

int arr[8] = {-6, 1, 2, 5, 6, 7, 9, 15};

int main()
{
    int start = 0;
    int end = 7;
    int flag = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            flag = 1;
            break;
        }

        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (flag == 1)
    {
        cout << "O";
    }
    else
    {
        cout << "X";
    }
    return 0;
}
