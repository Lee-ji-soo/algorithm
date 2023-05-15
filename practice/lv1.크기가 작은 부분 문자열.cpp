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

int answer = 0;

int solution(string t, string p)
{
    int plen = p.length();
    int tlen = t.length();
    long long pNum = stoll(p);

    for (int i = 0; i <= tlen - plen; i++)
    {
        string sub = t.substr(i, plen);
        long long subInt = stoll(sub);
        if (subInt <= pNum)
        {
            answer++;
        }
    }
    return answer;
};

int main()
{
    solution("10203", "15");
    cout << answer;
    return answer;
}

// 문제풀이: https: // sooleeandtomas.tistory.com/118