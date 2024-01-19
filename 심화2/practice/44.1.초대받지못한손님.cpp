/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <vector>

using namespace std;
unordered_map<string, int> um;

int main()
{
    int n = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < n; i++)
    {
        string name;
        int age;
        cin >> name >> age;
        if (um.count(name) == 0)
        {
            um.insert({name, age});
        }
        else
        {
            cout << name << endl;
            if (um[name] < age)
            {
                cout << um[name] << " " << age;
            }
            else
            {
                cout << age << " " << um[name];
            }
        }
    }

    return 0;
}