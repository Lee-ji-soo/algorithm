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
    string v = "BTSBBASKFCAASASASAAAA";
    int ret = v.find("KFC", 0);
    cout << ret;
    for (int i = ret; i < ret + 3; i++)
    {
        cout << v[i];
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
    string arr[4] = {
        "ABBT",
        "BTBT",
        "BBBT",
        "KFC"};

    for (int i = 0; i < 4; i++)
    {
        if (arr[i].find("BB") == -1)
        {
            cout << 'X';
        }
        else
        {
            cout << 'O';
        }
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
    string arr[4] = {
        "ABBT",
        "BTBT",
        "BBBT",
        "KFC"};

    for (int i = 0; i < 4; i++)
    {
        int len = arr[i].length();
        for (int j = len - 1; j >= 0; j--)
        {
            cout << arr[i][j];
        }
        cout << endl;
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
    string str;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        str += i;
    }

    int a, b;
    cin >> a >> b;

    cout << str.substr(a, b - a + 1);
    return 0;
}