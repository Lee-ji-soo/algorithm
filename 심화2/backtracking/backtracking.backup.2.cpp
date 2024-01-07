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

int map[3] = {5, 3, 2};
int target = 15;
int cnt = 0;
int sum = 0;
void run(int lev)
{
    if (lev == 4)
    {
        if (sum == target)
        {
            cnt++;
        }
        return;
    }
    int backup = sum;
    sum *= 5;
    run(lev + 1);
    sum = backup;

    sum += 3;
    run(lev + 1);
    sum = backup;

    sum /= 2;
    run(lev + 1);
    sum = backup;
}
int main()
{
    run(0);
    cout << cnt;
}