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

struct ROBOT
{
    int *x;
    int *y;
    string *z;
};

int main()
{

    int a, b;
    string c;

    ROBOT robot = {&a, &b, &c};
    cin >> a >> b >> c;

    ROBOT *p = &robot;

    cout << *(p->x) + *(p->y) << " " << *(p->z);
    return 0;
}