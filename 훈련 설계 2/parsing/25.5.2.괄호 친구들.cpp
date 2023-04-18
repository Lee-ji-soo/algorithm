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
int sum = 0;

void getSum(int a, int b, char o)
{
    int temp = stoi(str.substr(a + 1, b - a - 1));

    if (o == '[')
    {
        sum += temp;
    }
    else
    {
        sum *= temp;
    }
}

int findOpenIndex(int index)
{
    for (int i = index; i < str.length(); i++)
    {
        if (str[i] == '[' || str[i] == '{')
        {
            return i;
        }
    }
    return -1;
}

int findEndIndex(int index)
{
    for (int i = index; i < str.length(); i++)
    {
        if (str[i] == ']' || str[i] == '}')
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cin >> str;
    int startIndex = -1;
    int endIndex = -1;

    while (1)
    {
        startIndex = findOpenIndex(startIndex + 1);
        if (startIndex == -1)
        {
            break;
        }
        endIndex = findEndIndex(startIndex + 1);
        if (endIndex == -1)
        {
            break;
        }

        getSum(startIndex, endIndex, str[startIndex]);
        startIndex = endIndex;
    }

    cout << sum;
    return 0;
}