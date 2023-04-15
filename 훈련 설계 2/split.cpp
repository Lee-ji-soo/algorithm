/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

void split(string result[], int &rn, string str, string target)
{

    int index = -1;
    int i = 0;

    while (1)
    {
        index = str.find(target, index + 1);
        if (index == -1)
        {
            break;
        }

        string temp = str.substr(i, index - i);
        int q = 0;

        result[rn++] = temp;
        i = index + 1;
    }
}

int main()
{

    string str = "ID|EWR|DF|WE";
    str += "|";

    string result[10];
    int rn = 0;

    split(result, rn, str, "|");

    int w = 0;
    return 0;
}