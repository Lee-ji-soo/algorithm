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
int vect[10] = {0};
string op = "";
int vectInt = 0;
int opInt = 0;

int operate(int a, int b, char o)
{
    if (o == '+')
    {
        return a + b;
    }
    else
    {
        return a - b;
    }
}

int getSum()
{
    int sum = vect[0];
    for (int i = 1; i < vectInt; i++)
    {
        sum = operate(sum, vect[i], op[i - 1]);
    }
    return sum;
}

int findIndex(int index)
{
    int len = str.length();
    for (int i = index; i < len; i++)
    {
        if (str[i] == '+' || str[i] == '-')
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cin >> str;
    str += '-';
    int index = -1;
    int i = 0;

    while (1)
    {
        index = findIndex(index + 1);

        if (index == -1)
        {
            break;
        }

        int temp = stoi(str.substr(i, index - i));
        vect[vectInt++] = temp;
        op += str[index];

        i = index + 1;
    }

    int sum = 0;
    sum = getSum();
    cout << sum;
    return 0;
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
int sum = 0;

int operate(int a, int b, char o)
{
    if (o == '+')
    {
        return a + b;
    }
    else
    {
        return a - b;
    }
}

void getSum(int a, int b)
{
    int temp = stoi(str.substr(a + 1, b - a));
    sum = operate(sum, temp, str[a]);
}

int findIndex(int index)
{
    int len = str.length();
    for (int i = index; i < len; i++)
    {
        if (str[i] == '+' || str[i] == '-')
        {
            return i;
        }
    }
    return -1;
}

int findEndIndex(int index)
{
    int len = str.length();
    for (int i = index; i < len; i++)
    {
        if (str[i] == '+' || str[i] == '-')
        {
            return i - 1;
        }
    }
    return len - 1;
}

int main()
{
    cin >> str;
    if (str[0] != '-')
    {
        str.insert(0, "+");
    };

    int startIndex = -1;
    int endIndex = -1;

    while (1)
    {
        startIndex = findIndex(startIndex + 1);
        if (startIndex == -1)
        {
            break;
        }
        endIndex = findEndIndex(startIndex + 1);
        if (endIndex == -1)
        {
            break;
        }

        getSum(startIndex, endIndex);
    }

    cout << sum;
    return 0;
}