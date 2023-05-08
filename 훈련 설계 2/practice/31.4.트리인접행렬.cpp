/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

string str = "ABCDEF";
int arr[6][6] = {
    0, 1, 1, 0, 0, 0,
    0, 0, 0, 1, 1, 1};
char path[7] = {""};

void run(int lev)
{
    if (lev == 6)
    {
        return;
    }
    for (int i = 0; i < 6; i++)
    {
        if (arr[lev][i] == 0)
            continue;
        path[lev + 1] = str[i];
        run(i);
        path[lev + 1] = 0;
        cout << endl;
    }
    for (int j = 0; j < 6; j++)
    {
        cout << path[j];
    }
}

int main()
{
    path[0] = 'A';
    run(0);
    return 0;
}
