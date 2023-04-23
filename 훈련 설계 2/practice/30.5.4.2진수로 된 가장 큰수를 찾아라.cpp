/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<string> arr;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int max = -2e3;
    for (int i = 0; i < 3; i++)
    {
        int length = arr[i].size();
        if (max < length)
        {
            max = length;
        }
    }

    int index = 0;

    // fill string with 0;
    for (int y = 0; y < 3; y++)
    {
        if (arr[y].size() < max)
        {
            int gap = max - arr[y].size();
            string temp = "";
            for (int i = 0; i < gap; i++)
            {
                temp += "0";
            }
            arr[y] = temp + arr[y];
        }
    }

    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < max; x++)
        {
            if (arr[y][x] > arr[y + 1][x])
            {
                arr[y].swap(arr[y + 1]);
                break;
            }
            else if (arr[y][x] == arr[y + 1][x])
            {
                continue;
            }
            else
            {
                break;
            }
        }
    }

    cout << arr[2];
    return 0;
}