// 프레임 내의 가장 많이 등장하는 알파벳 찾기
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

string str = "BAQRRGQVAQQACCT";
int dat[100] = {0};
int strLen = str.length();
int sizy = 5;
int main()
{
    int limit = strLen - sizy;

    int max = -26e6;
    int maxI = 0;

    for (int i = 0; i < sizy; i++)
    {
        dat[str[i]]++;
    }

    for (int i = 0; i <= limit; i++)
    {

        for (int j = 0; j < 100; j++)
        {
            if (max < dat[j])
            {
                max = dat[j];
                maxI = j;
            }
        }

        if (i == limit)
            break;

        dat[str[i]]--;
        dat[str[i + sizy]]++;
    }

    cout << (char)maxI;

    return 0;
}