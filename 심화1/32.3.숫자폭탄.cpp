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

int main()
{
    int n = 0;
    cin >> n;
    int arr[100] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result;

    int same = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            same++;
        }
        else
        {
            same = 1;
        }
        result.push_back(arr[i]);
        if (same >= 3)
        {
            result.pop_back();
            result.pop_back();
            result.pop_back();
            same = 0;
        }
    }

    sort(result.begin(), result.end());

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}