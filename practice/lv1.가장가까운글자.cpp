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

vector<int> solution(string s)
{
    vector<int> answer;
    int dat[200] = {0};
    int datCount[200] = {0};
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (datCount[s[i]] == 0)
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(i - dat[s[i]]);
        }
        dat[s[i]] = i;
        datCount[s[i]]++;
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << ", ";
    }
    return answer;
}

int main()
{
    solution("bananabananabananabananabananabananabananabananabananabananabananabananabananabananabananabanana");
    return 0;
}