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
#include <cmath>

using namespace std;
int n = 0;
int map[10] = {0};
string op[4] = {"!!", "#", "$", "&"};
string path[4];
int cnt = 0;

void run(int lev, int result)
{
    if (lev == n - 1)
    {
        if (result == 100)
        {
            cnt++;
        }
        return;
    }

    int backup = result;
    for (int i = 0; i < 4; i++)
    {
        path[lev] = op[i];
        if (op[i] == "!!")
        {
            result = (result - map[lev + 1]) * (result + map[lev + 1]);
        }
        if (op[i] == "#")
        {
            result = max(result, map[lev + 1]);
        }
        if (op[i] == "$")
        {
            result = pow(result, 2) - pow(map[lev + 1], 2);
        }
        if (op[i] == "&")
        {
            result = pow(result + map[lev + 1], 2);
        }
        run(lev + 1, result);
        result = backup;
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> map[i];
    }
    run(0, map[0]);
    cout << cnt;
}