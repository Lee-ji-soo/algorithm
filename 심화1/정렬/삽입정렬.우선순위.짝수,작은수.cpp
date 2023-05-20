/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <iostream>
#include <vector>
using namespace std;

// 메모리 제한: 40byte;

int isEven(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    double arr[7] = {1, 5, 4, 2, 6, 9, 7};

    double result[7] = {0};

    for (int i = 0; i < 7; i++)
    {
        result[i] = arr[i];
        for (int x = i; x > 0; x--)
        {
            int aeven = isEven(result[x]);
            int beven = isEven(result[x - 1]);

            if (aeven && beven)
            {
                if (result[x - 1] > result[x])
                {
                    swap(result[x - 1], result[x]);
                }
            }
            else if (beven == 0 && aeven)
            {
                swap(result[x - 1], result[x]);
            }
            else if (beven == 0 && aeven == 0)
            {
                if (result[x - 1] > result[x])
                {
                    swap(result[x - 1], result[x]);
                }
            }
            else
            {
                break;
            }

            // 1. 짝수
            // 2. 같은 짝수
            // 3. 같은 홀수
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << result[i] << ',';
    }
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <iostream>
#include <vector>
using namespace std;

// 메모리 제한: 40byte;

int isEven(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int isCompare(int a, int b)
{
    // a가 우선순위가 높으면 return 1;
    // a가 우선순위가 낮으면 return 0;

    // 1. b만 짝수
    if (isEven(a) == 0 && isEven(b))
    {
        return 0;
    }
    // 2. a만 짝수
    if (isEven(a) && isEven(b) == 0)
    {
        return 1;
    }
    // 2. 둘다 짝수이거나 둘다 홀수.
    if (a > b)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    double arr[7] = {1, 5, 4, 2, 6, 9, 7};

    double result[7] = {0};

    for (int i = 0; i < 7; i++)
    {
        result[i] = arr[i];
        for (int x = i; x > 0; x--)
        {
            if (isCompare(result[x - 1], result[x]) == 0)
            {
                swap(result[x - 1], result[x]);
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << result[i] << ',';
    }
}
