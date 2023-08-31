/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    char str[5][6] = {""};

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cin >> str[y][x];
        }
    }

    for (int y = 0; y < 5; y++)
    {
        char temp = str[y][3];
        str[y][3] = str[y][1];
        str[y][1] = temp;
    }

    int flag = 0;
    for (int y = 0; y < 5; y++)
    {
        string temp = "";
        for (int x = 0; x < 5; x++)
        {
            temp += str[y][x];
            if (temp == "MAPOM")
            {
                cout << "yes";
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 0)
    {
        cout << "no";
    }
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    char str[5][6] = {""};

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cin >> str[y][x];
        }
    }

    for (int y = 0; y < 5; y++)
    {
        swap(str[y][1], str[y][3]);
    }

    int flag = 0;
    for (int y = 0; y < 5; y++)
    {
        string temp = "";
        for (int x = 0; x < 5; x++)
        {
            temp += str[y][x];
            if (temp == "MAPOM")
            {
                cout << "yes";
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 0)
    {
        cout << "no";
    }
}
