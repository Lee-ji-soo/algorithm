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
    for (int i = 0; i < 4; i++)
    {
        int a = 0;
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());

    int total = vec.size();
    int n = total - 1;
    int sum = 0;
    for (int i = 0; i < total; i++)
    {
        sum += (vec[i] * n);
        n--;
    }
    cout << sum;
    return 0;
}