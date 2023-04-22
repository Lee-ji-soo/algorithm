/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int used[4] = {0};
int arr[4][4] = {
    0,
    1,
    0,
    1,
    0,
    0,
    1,
    0,
    1,
    0,
    0,
    1,
    0,
    0,
    1,
    0,
};

string country[4] = {"한", "미", "일", "프"};

void run(int now)
{
    cout << country[now];

    for (int i = 0; i < 4; i++)
    {
        if (arr[now][i] == 1)
        {
            if (used[i] == 1)
                continue;
            used[i] = 1;
            run(i);
        }
    }
}

int main()
{

    used[0] = 1;
    run(0);

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int used[4] = {0};
int arr[4][4] = {
    0,
    1,
    0,
    1,
    0,
    0,
    1,
    0,
    1,
    0,
    0,
    1,
    0,
    0,
    1,
    0,
};
int cnt = 0;
string country[4] = {"kor", "america", "japan", "france"};
void run(int now)
{
    cout << country[now] << " ";
    if (now == 3)
    { // 도착지
        cnt++;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (used[i] == 1)
            continue;
        if (arr[now][i] == 0)
            continue;

        int w = i;
        int v = arr[now][i];
        int t = 0;
        used[i] = 1;
        run(i);
        used[i] = 0;
    }
}

int main()
{

    used[0] = 1;
    run(0);
    cout << cnt << "경로";
    return 0;
}