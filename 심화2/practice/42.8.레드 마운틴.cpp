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
using namespace std;

int map[15][15];
int used[15][15];
int flag = 0;
int direct[4][2] = {
    -1, 0,
    0, -1,
    1, 0,
    0, 1};
int n = 0;
void run(int y, int x)
{
    if (y == n - 1 && x == n - 1)
    {
        flag = 1;
        return;
    }

    for (int k = 0; k < 4; k++)
    {
        int dy, dx;
        dy = y + direct[k][0];
        dx = x + direct[k][1];
        if (dy < 0 || dx < 0 || dy >= n || dx >= n)
            continue;
        if (map[dy][dx] == 1)
            continue;
        if (used[dy][dx] == 1)
            continue;
        used[dy][dx] = 1;
        map[dy][dx] = 1;
        run(dy, dx);
    }
};

int main()
{
    cin >> n;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> map[y][x];
        }
    }
    run(0, 0);
    if (flag == 0)
    {
        cout << "불가능";
    }
    else
    {
        cout << "가능";
    }
}