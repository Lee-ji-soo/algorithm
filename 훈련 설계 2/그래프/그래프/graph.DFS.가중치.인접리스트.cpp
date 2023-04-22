/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node
{
    int n;
    int price;
};
vector<vector<Node>> m(4);
int used[4] = {0};
void run(int num, int sum)
{
    if (num == 2)
    {
        cout << sum << " ";
    }

    for (int i = 0; i < m[num].size(); i++)
    {
        int next = m[num][i].n;
        int price = m[num][i].price;

        if (used[next] == 1)
            continue;

        used[next] = 1;
        run(next, sum + price);
        used[next] = 0;
    }
}

int main()
{
    m[0] = {{1, 5}, {3, 8}};
    m[1] = {{2, 6}};
    m[3] = {{1, 7}, {2, 9}};

    run(0, 0);
    return 0;
}