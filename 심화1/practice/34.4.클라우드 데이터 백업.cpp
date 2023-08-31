/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<string> f;
int n;

int bsy()
{
    int start = 0;
    int end = n - 1;
    int max = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (f[mid][0] == '#')
        {
            start = mid + 1;
            if (max <= mid)
            {
                max = mid;
            }
        }
        else
        {
            end = mid - 1;
        }
    }
    return max;
}

int bsx(int y)
{
    int start = 0;
    int end = n - 1;
    int max = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (f[y][mid] == '#')
        {
            start = mid + 1;
            if (max <= mid)
            {
                max = mid;
            }
        }
        else
        {
            end = mid - 1;
        }
    }
    return max;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string c;
        cin >> c;
        f.push_back(c);
    }

    int ys = bsy();
    int xs = bsx(ys);
    cout << ys << " " << xs;
    return 0;
}
