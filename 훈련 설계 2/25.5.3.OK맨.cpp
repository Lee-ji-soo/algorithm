/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int hasBadword(string str)
{
    int index = -1;

    string badWords[3] = {"bad", "no", "puck"};

    for (int i = 0; i < 3; i++)
    {
        index = str.find(badWords[i]);
        if (index != -1)
        {
            return 1;
        }
    }
    return 0;
}

int isAlphabet(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1;
    }
    return 0;
}

int isNumber(char c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    return 0;
}

void countUnderbar(char c, int &underbarCount)
{
    if (c == '_')
    {
        underbarCount++;
    }
    else
    {
        underbarCount = 0;
    }
}

int check(string str)
{
    int underbarCount = 0;
    int dic[100] = {0};
    int len = str.length();

    // hasBadword
    if (hasBadword(str) == 1)
    {
        return 0;
    };

    for (int i = 0; i < len; i++)
    {
        // isNumber
        if (isNumber(str[i]) == 1)
        {
            return 0;
        }

        // isUsed under 6
        if (isAlphabet(str[i]) == 1)
        {
            dic[str[i]]++;

            if (dic[str[i]] == 6)
            {
                return 0;
            }
        }

        // isDuplicateUnderbar under 5
        countUnderbar(str[i], underbarCount);
        if (underbarCount == 6)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string str = "";
    cin >> str;

    int flag = 1;
    flag = check(str);

    if (flag == 1)
    {
        cout << "pass";
    }
    else
    {
        cout << "fail";
    }

    return 0;
}