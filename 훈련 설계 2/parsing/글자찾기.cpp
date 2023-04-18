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
    string a = "ABCAAABCAAABCA";
    int index = 0;
    int len = a.length();
    int cnt = 0;
    while (index < len - 1)
    {
        int nextA = a.find("ABC", index);
        if (nextA == -1)
            break;
        index = nextA + 1;
        cnt++;
    }
    cout << cnt;
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
    string a = "AS[ABC]EKFLE[ABC]JT[ABC]";
    int b = -1;
    int cnt = 0;
    while (1)
    {
        b = a.find("[ABC]", b + 1);
        if (b == -1)
            break;
        cnt++;
    }
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
        "GOLDABGOLD",
        "GOLDTTT",
        "AGOLDGOLD",
        "GOLDTTTT"};

    int cnt = 0;
    int index = -1;
    for (int y = 0; y < 4; y++)
    {
        while (1)
        {
            index = arr[y].find("GOLD", index + 1);
            int q = 0;
            if (index == -1)
            {
                break;
            }
            cnt++;
        }
    }
    cout << cnt;
}