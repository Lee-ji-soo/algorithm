/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int arr[6][6] = {
    0, 0, 1, 0, 2, 0,
    5, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 7,
    2, 0, 0, 0, 8, 0,
    0, 0, 9, 0, 0, 0,
    4, 0, 0, 7, 0, 0};

string str = "012345";
int used[6] = {0};
int n = 0;
void run(int now, int sum)
{
    cout << now << " " << sum << endl;

    for (int i = 0; i < 6; i++)
    {
        if (used[i] == 1)
            continue;

        if (arr[now][i] > 0)
        {
            used[i] = 1;
            run(i, sum += arr[now][i]);
        }
    }
}

int main()
{
    cin >> n;
    used[n] = 1;
    run(n, 0);
}