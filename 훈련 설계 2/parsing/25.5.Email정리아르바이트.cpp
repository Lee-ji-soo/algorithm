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

void split(string result[10], int &rn, char target, string str)
{
    str += target;
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
        result[rn++] = temp;
        i = index + 1;
    }
}

int main()
{
    string str = "";
    cin >> str;
    int rn = 0;
    string result[10];
    split(result, rn, '|', str);

    for (int i = 0; i < rn; i++)
    {
        int atIndex = result[i].find("@", 0);
        int dotIndex = result[i].find(".", atIndex);

        string name = result[i].substr(0, atIndex);
        string domain = result[i].substr(atIndex + 1, dotIndex - atIndex - 1);

        cout << "[#" << name << "] " << domain << endl;
    }
    return 0;
}