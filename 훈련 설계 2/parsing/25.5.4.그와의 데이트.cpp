/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

string arr[10] = {""};

void split(string str, int &rn, char target)
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
        arr[rn++] = temp;
        i = index + 1;
    }
}

int getMonth()
{
    if (arr[1].length() == 1)
    {
        if (arr[1][0] == -1)
        {
            return 0;
        }
        else
        {
            return 9;
        }
    }
    else
    {
        if (arr[1][0] != 'X' && arr[1][1] != 'X')
        {
            return 0;
        }

        if (arr[1][0] == 'X' && arr[1][1] == 'X')
        {
            return 3;
        }

        if (arr[1][0] == 'X')
        {
            return 1;
        }

        if (arr[1][1] == 'X')
        {
            return 2;
        }
    }

    return 0;
}

int getDay()
{
    if (arr[2].length() == 1)
    {
        if (arr[2][0] != 'X')
        {
            return 0;
        }
        else
        {
            return 9;
        }
    }
    else
    {
        if (arr[2][0] != 'X' && arr[2][1] != 'X')
        {
            return 0;
        }

        if (arr[2][0] == 'X' && arr[2][1] == 'X')
        {
            return 22;
        }

        if (arr[2][0] == 'X')
        {
            if (0 == arr[2][1] || arr[2][1] == 1)
            {
                return 3;
            }
            else if (arr[2][1] > 1)
            {
                return 2;
            }
        }

        if (arr[2][1] == 'X')
        {
            return 10;
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

int main()
{

    string str = "";
    cin >> str;
    str += '.';
    int rn = 0;
    split(str, rn, '.');

    int month = getMonth();
    int day = getDay();

    if (month == 0 && day == 0)
    {
        return 1;
    }
    cout << month * day;
}

#include <iostream>
#include <string>
using namespace std;

int isPossible(string tar, string xx)
{
    if (tar.length() != xx.length())
        return 0;

    // X가 아니라 숫자인데, 똑같은 값이 아니면 탈락
    if (xx[0] != 'X' && xx[0] != tar[0])
        return 0;
    if (tar.length() == 1)
        return 1;

    if (xx[1] != 'X' && xx[1] != tar[1])
        return 0;
    return 1;
}

int getMon(string mon)
{
    int cnt = 0;
    for (int i = 1; i <= 12; i++)
    {
        string tar = to_string(i);
        cnt += isPossible(tar, mon);
    }
    return cnt;
}

int getDay(string day)
{
    int cnt = 0;
    for (int i = 1; i <= 31; i++)
    {
        string tar = to_string(i);
        cnt += isPossible(tar, day);
    }
    return cnt;
}

int main()
{
    string mon, day;
    string input;

    cin >> input;
    // input = "2025.X.1X";

    int dot = input.find('.', 5);
    mon = input.substr(5, dot - 4 - 1);
    day = input.substr(dot + 1);

    int a = getMon(mon);
    int b = getDay(day);
    cout << a * b;

    return 0;
}
