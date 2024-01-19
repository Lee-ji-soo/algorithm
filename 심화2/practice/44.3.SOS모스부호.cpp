/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
int main()
{
    unordered_map<string, int> um;
    string emg[5] = {
        "1011",
        "0011",
        "1111",
        "0000",
        "1100",
    };

    string map[5];
    for (int y = 0; y < 5; y++)
    {
        cin >> map[y];
    }

    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            string temp;
            temp = map[y].substr(x, 4);
            if (um.count(temp) == 0)
            {
                um[temp]++;
            }
            else
            {
                continue;
            }
        }
    }

    for (int y = 0; y < 5; y++)
    {
        string target = emg[y];
        if (um.count(target) >= 1)
        {
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
    return 0;
}