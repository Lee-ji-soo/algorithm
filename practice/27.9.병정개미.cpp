/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int arr[4][4] = {0};

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            cin >> arr[y][x];
        }
    }
    int dat[4][2] = {
        -1, 0,
        0, 1,
        1, 0,
        0, -1};

    int flag = 1;
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            int cnt = 0;
            for (int i = 0; i < 4; i++)
            {
                int dy, dx;
                dy = y + dat[i][0];
                dx = x + dat[i][1];

                if (dy < 0 || dy > 3 || dx < 0 || dx > 3)
                    continue;

                cnt += arr[dy][dx];
                if (arr[y][x] == 1 && cnt > 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        cout << "안전한 상태";
    }
    else
    {
        cout << "위험한 상태";
    }
    return 0;
}