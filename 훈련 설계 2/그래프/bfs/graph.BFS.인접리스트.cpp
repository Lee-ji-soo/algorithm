/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

string str = "ABCDE";
vector<vector<int>> vect(7);
queue<int> q;
int used[5] = {0};

int main()
{
    // ABCDE
    vect[0] = {1, 2};    // A
    vect[1] = {0, 2};    // B
    vect[2] = {0, 1, 3}; // C
    vect[3] = {2, 4};    // D
    vect[4] = {4};       // D

    q.push(0);
    used[0] = 1;
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        cout << str[now] << " ";

        int size = vect[now].size();
        for (int i = 0; i < size; i++)
        {
            int next = vect[now][i];
            if (used[next] == 1)
                continue;
            used[next] = 1;
            q.push(next);
        }
    }
}