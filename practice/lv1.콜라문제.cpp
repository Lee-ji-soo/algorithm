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

// a: 나누기
// b: 받기
// n: 총개수

int solution(int a, int b, int n)
{
    int answer = 0;

    int mod = 0;

    while (true)
    {
        int s = 0;

        if (n < a)
        {
            break;
        }

        s = n / a;
        mod = n % a;
        answer += s * b;
        n = (s * b) + mod;
    }
    cout << answer;
    return answer;
}

int main()
{
    solution(3, 2, 20);
    return 0;
}