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

struct Node
{
    string order;
    int number;
};

int main()
{
    int n;
    cin >> n;

    Node arr[n] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].order;
        if (arr[i].order == "push")
        {
            cin >> arr[i].number;
        }
    }

    vector<int> numbs(0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i].order == "push")
        {
            numbs.push_back(arr[i].number);
        }
        if (arr[i].order == "printLast")
        {
            cout << numbs[numbs.size() - 1] << endl;
        }
        if (arr[i].order == "pop")
        {
            numbs.pop_back();
        }
    }
    return 0;
}