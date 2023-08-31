/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    return a.length() < b.length();
}

int main()
{
    int n = 0;
    cin >> n;
    vector<string> arr;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}