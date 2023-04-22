
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

vector<vector<int>> arr(6);

void run(int now)
{
    cout << now;
    for (int i = 0; i < arr[now].size(); i++)
    {
        int q = arr[now][i];
        run(arr[now][i]);
    }
}

int main()
{
    arr[0] = {1, 2, 3};
    arr[1] = {4, 5};

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

int t[6][6] = {
    0, 1, 1, 0, 0, 0,
    0, 0, 0, 1, 1, 0,
    0, 0, 0, 0, 0, 1};
string a = "KGZHIR";

void run(int num)
{
    cout << a[num];

    for (int i = 0; i < 6; i++)
    {
        if (t[num][i] == 1)
        {
            run(i);
        }
    }
}

int main()
{
    run(0);
    return 0;
}