/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

int arr[5] = {4, 3, 1, 6, 2};

int compare(int t, int v)
{
    // 내림차순
    if (t > v)
        return 1;
    return 0;

    // return t > v;
}

int main()
{
    // arr의 시작 주소, arr의 끝의 다음주소
    // 오름차순
    sort(arr, arr + 5);

    // 2.내림차순
    sort(arr, arr + 5, greater<int>());

    sort(arr, arr + 5, compare);
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

int arr[5] = {4, 3, 1, 6, 2};

int isEven(int a)
{
    return a % 2 == 0;
}

int compare(int t, int v)
{
    // 우선순위 조건
    // 1.짝수
    // 2.작은수
    if (isEven(t) == 0 && isEven(v))
    {
        return 0;
    }

    if (isEven(t) && isEven(v) == 0)
    {
        return 1;
    }

    return t < v;
}

int main()
{
    sort(arr, arr + 5, compare);
    return 0;
    // {2,4,6,1,3};
}