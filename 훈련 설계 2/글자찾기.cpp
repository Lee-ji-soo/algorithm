/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "ABCAAABCAAABCA";
    int index = 0;
    int len = a.length();
    int cnt = 0;
    while (index < len - 1)
    {
        int nextA = a.find("ABC", index);
        if (nextA == -1)
            break;
        index = nextA + 1;
        cnt++;
    }
    cout << cnt;
}