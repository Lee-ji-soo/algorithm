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
    string str = "ABKFC___KFC";
    // str.erase(3,2);
    // cout << str << endl;
    // str.insert(1,"<H!>");
    // cout << str;

    int index = -1;

    while (true)
    {
        index = str.find("KFC", index + 1);
        if (index == -1)
        {
            break;
        }

        str.erase(index, 3);
        str.insert(index, "###");
    }

    cout << str;

    return 0;
}