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
    string str = "B[45]AB[9944]";

    int len = str.length();
    int flag = 0;
    string temp = "";
    string a[10] = {""};
    int k = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ']')
        {
            flag = 0;
            a[k] = temp;
            k++;
            temp = "";
        }

        if (flag == 1)
        {
            temp += str[i];
        }

        if (str[i] == '[')
        {
            flag = 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << endl;
        int num = stoi(a[i]);
        sum += num;
    }
    cout << sum;
    return 0;
}