/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

string str = "";
string arr[5] = {"KFC", "MC", "BICMAC", "SHACK", "SONY"};
string rarr[5] = {"#BBQ#", "#BBQ#", "#MACBOOK#", "#SHOCK#", "#NONY#"};

void replace(int i, int index)
{
    int len = arr[i].length();
    str.erase(index, len);
    string replaceWord = rarr[i];
    str.insert(index, replaceWord);
}

int find(string s, int index)
{
    return str.find(s, index + 1);
}

int main()
{
    cin >> str;

    int index = -1;

    for (int i = 0; i < 5; i++)
    {
        while (1)
        {
            int w = i;
            index = find(arr[i], index);
            if (index == -1)
            {
                break;
            };
            replace(i, index);
            string q = str;
        }
    }
    cout << str;
    return 0;
}