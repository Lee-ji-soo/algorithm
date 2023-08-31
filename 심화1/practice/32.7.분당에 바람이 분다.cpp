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

int main()
{
    int n = 0;
    cin >> n;
    vector<vector<char>> result(n);

    string c;
    for (int i = 0; i < n; i++)
    {
        int a, b;

        cin >> a >> b >> c;

        int size = c.length();
        for (int y = 0; y < size; y++)
        {
            result[i].push_back(c[y] - '0');
        }
    }

    int wind = 0;
    cin >> wind;
    int windarr[wind] = {0};
    for (int i = 0; i < wind; i++)
    {
        cin >> windarr[i];

        for (int x = 0; x < n; x++)
        {
            int lastindex = result[x].size() - 1;
            if (lastindex >= 0)
            {
                int num = result[x][lastindex];
                if (num <= windarr[i])
                {
                    result[x].pop_back();
                }
                else
                {
                    result[x][lastindex] = num - windarr[i];
                }
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        answer += result[i].size();
    }
    cout << answer;
    return 0;
}