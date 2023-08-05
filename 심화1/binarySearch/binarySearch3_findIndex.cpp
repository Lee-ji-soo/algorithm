/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// 몇번째 인덱스에 있는지 찾기
int target = 5;
int vect[8] = {-6, 1, 2, 5, 6, 7, 9, 15};

int bs(int s, int e)
{
    int start = s;
    int end = e;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (vect[mid] == target)
        {
            return mid;
        }

        if (vect[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int bindex = bs(0, 7);
    cout << bindex;
    return 0;
}
