/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int arr[6][6] = {
    0,
    1,
    0,
    0,
    1,
    0,
    0,
    0,
    1,
    0,
    0,
    1,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

queue<int> q;
int used[6] = {0};
int n;
int main()
{
    cin >> n;
    string str = "012345";

    used[n] = 1;
    q.push(n);

    while (!q.empty())
    {
        int temp = q.front();
        cout << str[temp] << " ";
        q.pop();

        for (int i = 0; i < 6; i++)
        {
            if (used[i] == 1)
                continue;
            if (arr[temp][i] == 1)
            {
                used[i] = 1;
                q.push(i);
            }
        }
    }

    return 0;
}