/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n = 0;
int map[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int cnt = 0;
void run(int lev, int sum)
{
    if (sum > 7)
        return;
    if (lev == n)
    {
        if (sum == 7)
        {
            cnt++;
        }
        return;
    }
    for (int i = 0; i < 10; i++)
    {
        run(lev + 1, sum + i);
    }
}
int main()
{
    cin >> n;
    run(0, 0);
    cout << cnt;
}