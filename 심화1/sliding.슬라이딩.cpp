/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int slide[11] = {4, 1, 1, 1, 13, 4, -3, -13, 9, 20, 13};
int maxi = -26e5;
int maxIndex = 0;

int getSum(int index)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += slide[index];
    }
    return sum;
}

int main()
{
    int sum = 0;

    maxi = getSum(0);
    sum = maxi;

    for (int i = 0; i <= 11 - 5; i++)
    {
        if (maxi < sum)
        {
            maxi = sum;
            maxIndex = i;
        }

        if (i == 11 - 5)
            break;
        sum -= slide[i];
        sum += slide[i + 5];
    }
    cout << maxIndex;
    return 0;
}