/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char arr[3][4] = {
        "_54",
        "3__",
        "__1"};

    int n;
    cin >> n;

    char result[3][4] = {"_54",
                         "3__",
                         "__1"};

    int dat[3][3][2] = {
        {{0, 2},
         {1, 1},
         {2, 0}},
        {{-1, 1},
         {0, 0},
         {1, -1}},
        {{-2, 0},
         {-1, -1},
         {0, -2}}};
    for (int i = 0; i < n; i++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                int dy = 0;
                int dx = 0;
                dy = y + dat[y][x][0];
                dx = x + dat[y][x][1];
                if (x == 0 && y == 2)
                {
                    int q = 1;
                }
                if (dy > 3 || dy < 0 || dx > 3 || dx < 0)
                {
                    continue;
                }
                result[dy][dx] = arr[y][x];
            }
        }

        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                arr[y][x] = result[y][x];
            }
        }
    }

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << result[y][x];
        }
        cout << endl;
    }

    return 0;
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;

int cube[3][3] = {
    0,
    5,
    4,
    3,
    0,
    0,
    0,
    0,
    1,
};

void spin()
{
    int x, y;
    int result[3][3];

    // 돌린 결과를 result에 저장
    for (y = 0; y < 3; y++)
    {
        for (x = 0; x < 3; x++)
        {
            result[x][2 - y] = cube[y][x];
        }
    }

    // result --> cube로 Copy
    for (y = 0; y < 3; y++)
    {
        for (x = 0; x < 3; x++)
        {
            cube[y][x] = result[y][x];
        }
    }
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        spin();
    }

    // 출력
    int x, y;
    for (y = 0; y < 3; y++)
    {
        for (x = 0; x < 3; x++)
        {
            if (cube[y][x] == 0)
                cout << "_";
            else
                cout << cube[y][x];
        }
        cout << "\n";
    }

    return 0;
}