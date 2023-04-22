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

int evid[7] = {-1, 0, 0, 1, 2, 4, 4};
int ts[7] = {8, 3, 5, 6, 8, 9, 10};

void run(int num)
{
    if (num <= 0)
    {
        return;
    }

    run(evid[num]);
    cout << num << "번index(" << ts[num] << "시)" << endl;
}

int main()
{
    int a = 0;
    cin >> a;
    cout << "0번index(출발)" << endl;
    run(evid[a]);
    cout << a << "번index(" << ts[a] << "시)" << endl;
    return 0;
}
