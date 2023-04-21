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

// 나머지 0으로 초기화됨
int arr[6][6] = {
    0,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
};

void run(int n)
{
    cout << n;
    for (int i = 0; i < 6; i++)
    {
        if (arr[n][i] == 0)
            continue;
        run(i);
    }
}

int main()
{
    string s = "ABTQVX";
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

vector<vector<int>> t(6);
string a = "KGZHIR";

void run(int num)
{
    cout << a[num];

    for (int i = 0; i < t[num].size(); i++)
    {
        run(t[num][i]);
    }
}

int main()
{
    t[0] = {1, 2};
    t[1] = {3, 4};
    t[2] = {5};
    run(0);
    return 0;
}