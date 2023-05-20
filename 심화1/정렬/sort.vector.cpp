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

// #백터의 정렬
vector<int> a = {4, 7, 1, 5, 2, 6};

int compare(int a, int b)
{
    return a < b;
}

int main()
{
    sort(a.begin(), a.end(), compare);

    for (auto i = a.begin(); i != a.end(); ++i)
    {
        cout << *i << ",";
    }
    return 0;
}