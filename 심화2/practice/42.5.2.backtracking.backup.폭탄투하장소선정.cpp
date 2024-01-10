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

char map[5][5];
int used[5][5];
char path[5];
int maxCnt = -2e5;
char maxPath[5];
int n = 0;

int direct[5][2] = {
    -1, 0,
    0, -1,
    1, 0,
    0, 1,
    0, 0};

int compare(char a, char b)
{
    return a < b;
};

int getBombCount(char map[5][5], int y, int x)
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        int dy, dx;
        dy = y + direct[i][0];
        dx = x + direct[i][1];
        if (dy < 0 || dx < 0 || dy >= 5 || dx >= 5)
            continue;
        if (map[dy][dx] != '_')
        {
            map[dy][dx] = '_';
            count++;
        }
    }
    return count;
}
void run(int lev, int cnt)
{
    if (lev == n)
    {
        if (maxCnt < cnt)
        {
            maxCnt = cnt;
            memcpy(maxPath, path, 5 * 1);
        }
        return;
    }
    char backup[5][5] = {""};
    memcpy(backup, map, 5 * 5 * 1);
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            if (map[y][x] != '_')
            {
                if (used[y][x] == 1)
                    continue;
                used[y][x] = 1;
                path[lev] = map[y][x];
                int count = getBombCount(map, y, x);
                run(lev + 1, cnt + count);
                memcpy(map, backup, 5 * 5 * 1);
                used[y][x] = 0;
            }
        }
    }
}

int main()
{
    for (int y = 0; y < 4; y++)
    {
        cin >> map[y];
    }
    cin >> n;
    run(0, 0);
    sort(maxPath, maxPath + n);
    for (int i = 0; i < n; i++)
    {
        cout << maxPath[i] << " ";
    }
}