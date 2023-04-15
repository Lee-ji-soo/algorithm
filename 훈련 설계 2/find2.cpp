/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input = "";
    cin >> input;

    int index = -1;
    int i = 0;

    index = input.find('#', index + 1);
    while (1)
    {
        if (i > input.length() - 1)
        {
            break;
        }
        if (index == i)
        {
            index = input.find('#', index + 1);
            cout << endl;
        }
        else
        {
            cout << input[i];
        }
        i++;
    }
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
using namespace std;

int main()
{
    string input = "";
    cin >> input;

    int index = -1;
    int i = 0;

    int a = input.find("#", 0);
    int b = input.find("#", a + 1);

    cout << input.substr(0, a) << endl;
    cout << input.substr(a + 1, b - a - 1) << endl;
    cout << input.substr(b + 1, input.length()) << endl;

    return 0;
}