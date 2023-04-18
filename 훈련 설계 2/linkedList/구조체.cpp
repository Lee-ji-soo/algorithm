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

int main()
{
    struct A
    {
        int a;
        int b;
    };
    A da{3, 7};
    // A da{
    //     a : 3,
    //     b : 7
    // };
    A db{
        a : 9,
        b : 4
    };

    cout << da.a;
    cout << da.b;
    return 0;
}

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

int main()
{
    struct KFC
    {
        char a;
        int vect[3];
    };

    KFC g1{'A', {1, 3, 7}};
    KFC g2{'C', {9, 9, 9}};

    cout << g1.a;
    for (int i = 0; i < 3; i++)
    {
        cout << g1.vect[i];
    }
    return 0;
}