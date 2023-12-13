/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;

int main()
{
    vec.push_back(500);
    vec.push_back(100);
    vec.push_back(50);
    vec.push_back(10);

    int total = vec.size();
    int sum = 0;
    int n = 0;
    cin >> sum;

    for (int i = 0; i < total; i++)
    {
        n += sum / vec[i];
        sum = sum % vec[i];
    }
    cout << n;
    return 0;
}