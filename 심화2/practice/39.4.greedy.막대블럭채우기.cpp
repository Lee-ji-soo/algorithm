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
    int num = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end());

    int len = vec.size();
    int n = 0;
    int sum = 100;
    for (int i = 0; i < len; i++)
    {
        if (sum < vec[i])
            continue;
        sum -= vec[i];
        n++;
    }

    cout << n;
    return 0;
}