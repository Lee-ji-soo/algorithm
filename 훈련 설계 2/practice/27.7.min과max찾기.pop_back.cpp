/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    vector<int> num(6);
    string command = "";
    for (int i = 0; i < 6; i++)
    {
        cin >> num[i];
    }
    cin >> command;

    for (int i = 0; i < 6; i++)
    {
        int min = 99;
        int max = -99;
        int minIndex = 0;
        int maxIndex = 0;
        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] > max)
            {
                max = num[i];
                maxIndex = i;
            }
            if (num[i] < min)
            {
                min = num[i];
                minIndex = i;
            }
        }
        if (command[i] == 'm')
        {
            cout << num[minIndex];
            swap(num[minIndex], num[num.size() - 1]);
            num.pop_back();
        }

        if (command[i] == 'x')
        {
            cout << num[maxIndex];
            swap(num[maxIndex], num[num.size() - 1]);
            num.pop_back();
        }
    }
    return 0;
}