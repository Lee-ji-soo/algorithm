/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int isEnglish(char s)
{
    if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string str = "";
    cin >> str;
    str += "*";

    int len = str.length();

    string num = "";
    for (int i = 0; i < len; i++)
    {
        if (isEnglish(str[i]))
        {
            if (num.length() > 0)
            {
                int realNum = stoi(num);
                cout << '#' << realNum + 17 << endl;
                num = "";
            }
            cout << str[i];
        }
        else
        {
            num += str[i];
        }
    }
    int realNum = stoi(num);
    cout << '#' << realNum + 17 << endl;
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

string str = "";

int isEnglish(char s)
{
    if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int getNameIndex(int index)
{
    for (int i = index; i < str.length(); i++)
    {
        if (isEnglish(str[i]) == 1)
        {
            return i;
        }
    }
    return -1;
}

int getNumIndex(int index)
{
    for (int i = index; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cin >> str;

    int nameIndex = 0;
    int numIndex = 0;
    string name = "";
    string num = "";

    while (true)
    {
        numIndex = getNumIndex(numIndex);
        if (numIndex == -1)
        {
            break;
        }
        name = str.substr(nameIndex, numIndex - nameIndex);

        nameIndex = numIndex;
        nameIndex = getNameIndex(nameIndex);
        num = str.substr(numIndex, nameIndex - numIndex);

        int realNum = stoi(num) + 17;
        cout << name << '#' << realNum << endl;
        numIndex = nameIndex;
    }
}