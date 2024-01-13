/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

char map[10];
int maxi = -2e5;
int n = 0;
int len = 0;
void swap(char map[10], int i, int j)
{
    int temp = map[i];
    map[i] = map[j];
    map[j] = temp;
}

void run(int lev, int sum)
{
    if (lev == n)
    {
        if (maxi < sum)
        {
            maxi = sum;
        }
        return;
    }

    char backup[10];
    memcpy(backup, map, 10 * sizeof(char));
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            swap(map, i, j);
            int temp = 0;
            for (int k = 1; k < len; k++)
            {
                if (map[k - 1] == map[k])
                {
                    temp -= 50;
                }
                else if (abs(map[k - 1] - map[k]) <= 5)
                {
                    temp += 3;
                }
                else if (abs(map[k - 1] - map[k]) >= 20)
                {
                    temp += 10;
                }
            }
            run(lev + 1, temp);
            memcpy(map, backup, 10 * sizeof(char));
        }
    }
}
int main()
{
    cin >> map;
    len = strlen(map);
    cin >> n;
    run(0, 0);
    cout << maxi;
    return 0;
}