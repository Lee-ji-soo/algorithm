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

string reverse(string str)
{
    string t = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        t += str[i];
    }
    return t;
}

int main()
{
    int num = 0;
    int n = 0;

    cin >> num >> n;

    for (int i = 0; i < n; i++)
    {
        num *= 2;
        string temp = to_string(num);
        string reversed = reverse(temp);
        num = stoi(reversed);
    }
    cout << num;
}
