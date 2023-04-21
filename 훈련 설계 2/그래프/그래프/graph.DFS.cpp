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
vector<vector<int>> arr(4);

string country[4] = {"한", "미", "일", "프"};

void run(int now)
{
    cout << country[now];
    for (int i = 0; i < arr.size(); i++)
    {
        int next = arr[now][i];
        if (used[next] == 1)
            continue;
        used[next] = 1;
        run(arr[now][i]);
    }
}

int main()
{
    arr[0] = {1, 3};
    arr[1] = {2};
    arr[2] = {0, 3};
    arr[3] = {2};

    used[0] = 1;
    run(0);

    return 0;
}