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
    string str = "BT[42693742]HH";
    int len = str.length();
    int a, b;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == '[')
        {
            a = i + 1;
        }
        if (str[i] == ']')
        {
            b = i - 1;
        }
    }

    cout << str.substr(a, b - a + 1);
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
    string arr[4] = {
        "ABCQ",
        "B[4]2",
        "CCDA",
        "BT[15]"};

    for (int i = 0; i < 4; i++)
    {
        int a, b;
        if (arr[i].find('[') == -1)
            continue;
        a = arr[i].find('[') + 1;
        b = arr[i].find(']') - 1;
        cout << arr[i].substr(a, b - a + 1);
        cout << endl;
    }
    return 0;
}