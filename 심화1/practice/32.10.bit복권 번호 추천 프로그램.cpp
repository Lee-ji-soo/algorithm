/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int dat[10] = {0};

int compare(int a, int b)
{
    if (dat[a] == dat[b])
    {
        return a < b;
    }
    return dat[a] > dat[b];
}

int main()
{
    int n = 0;
    cin >> n;
    int arr[n][n];
    int arr2[n][n];
    vector<int> result;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr2[y][x];
        }
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (arr2[y][x] == 1)
            {
                result.push_back(arr[y][x]);
                dat[arr[y][x]]++;
            };
        }
    }

    sort(result.begin(), result.end(), compare);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
