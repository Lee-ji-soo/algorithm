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

int main()
{
    double arr[7] = {4.2, 7.3, 1.5, 1.6, 4.7, 5.5, 8.1};

    double result[5] = {0};

    result[0] = arr[0];
    int temp = 0;
    for (int i = 0; i < 7; i++)
    {
        if (i >= 4)
        {
            temp = 4;
        }
        else
        {
            temp = i;
        }
        result[temp] = arr[i];
        for (int x = temp; x > 0; x--)
        {
            if (result[x - 1] < result[x])
            {
                swap(result[x - 1], result[x]);
            }
            else
            {
                break;
            }
        }
    }

    // cout로 소숫점 2자리수까지 출력
    // cout.precision(2);

    // printf("%lf\n", result[i]);
    // printf로 소수점 1번째 자리수까지 출력
    // printf("%.1lf\n", result[i]);
    // printf로 소수점 2번째 자리수까지 출력
    // printf("%.2lf\n", result[i]);

    for (int i = 0; i < 3; i++)
    {
        cout << result[i] << endl;
        printf("%.2lf\n", result[i]);
    }
}
