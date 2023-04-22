/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int n;
    int level;
};

int main()
{
    string str = "ABCDE";

    queue<Node> q;

    vector<vector<int>> vect(5);

    int start = 0;
    int end = 3;

    vect[0] = {1, 4}; // A
    vect[1] = {3, 4}; // B
    vect[2] = {0};    // C
    vect[3] = {0, 2}; // D
    int used[5] = {0};

    q.push({start, 0});
    used[0] = 1;
    while (!q.empty())
    {
        Node now = q.front();
        if (now.n == end)
        {
            cout << now.level;
            break;
        }
        q.pop();

        int size = vect[now.n].size();
        for (int i = 0; i < size; i++)
        {
            int next = vect[now.n][i];
            if (used[next] == 1)
                continue;
            used[next] = 1;
            q.push({next, now.level + 1});
        }
    }
}