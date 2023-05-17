/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> food;
    food = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    string answer = "";

    for (int i = 1; i < food.size(); i++)
    {
        for (int j = 0; j < food[i] / 2; j++)
        {
            answer += to_string(i);
        };
    }
    answer += to_string(0);
    for (int i = food.size() - 1; i >= 1; i--)
    {
        for (int j = 0; j < food[i] / 2; j++)
        {
            answer += to_string(i);
        };
    }

    cout << answer;
    return 0;
}