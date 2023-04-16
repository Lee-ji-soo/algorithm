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

string removeDuplicateBracer(string str, char target)
{
    int len = str.length();
    char vect[100] = {""};
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        int vecLen = strlen(vect);
        if (vecLen >= 0 && (str[i] == target) && vect[vecLen - 1] == str[i])
        {
            continue;
        }
        vect[cnt] = str[i];
        cnt++;
    }

    int vecLen = strlen(vect);
    string result = "";
    for (int i = 0; i < vecLen; i++)
    {
        result += vect[i];
    }
    return result;
}

string removeDuplicateSmile(string str)
{
    int len = str.length();
    char vect[100] = {""};
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        int vecLen = strlen(vect);
        if (vecLen >= 0 && str[i] == '^' && (vect[vecLen - 2] == vect[vecLen - 1]) && (vect[vecLen - 1] == str[i]))
        {
            continue;
        }
        vect[cnt] = str[i];
        cnt++;
    }
    int vecLen = strlen(vect);
    string result = "";
    for (int i = 0; i < vecLen; i++)
    {
        result += vect[i];
    }
    return result;
}

string replaceSmile(string str)
{
    int opener = -1;
    int closer = -1;

    while (1)
    {
        opener = str.find("^", opener + 1);
        closer = str.find("^", opener + 1);

        if (opener == -1)
        {
            break;
        }

        string temp = str.substr(opener + 1, closer - opener - 1);
        if (temp.length() == 1)
        {
            if (temp != "_" || temp != "(" || temp != ")")
            {
                str.erase(opener + 1, 1);
                str.insert(opener + 1, "_");
            }
        }

        opener = closer + 1;
    }
    return str;
}

int main()
{
    string str = "";
    cin >> str;
    str = removeDuplicateBracer(str, '(');
    str = removeDuplicateBracer(str, ')');
    str = removeDuplicateSmile(str);
    str = replaceSmile(str);
    cout << str;
    return 0;
}