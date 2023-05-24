/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int b = 0;
    int n = 0;

    cin >> b >> n;
    int max = -26e3;
    int maxIndex = 0;

    vector<vector<string>> result(b);
    for (int i = 0; i < n; i++)
    {
        int vote;
        string name;

        cin >> vote >> name;
        result[vote].push_back(name);
        int len = result[vote].size();
        if (max < len)
        {
            max = len;
            maxIndex = vote;
        }
    }

    for (int i = 0; i < result[maxIndex].size(); i++)
    {
        cout << result[maxIndex][i] << " ";
    }

    return 0;
}