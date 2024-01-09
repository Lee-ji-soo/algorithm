/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
struct Node
{
    char name;
    int price;
};
string a = "";
int n = 0;
Node map[7] = {
    {'a', 15},
    {'b', 20},
    {'c', 44},
    {'d', 22},
    {'e', 55},
    {'f', 16},
    {'g', 45},
};
Node used[10];
Node path[10];
int maxPrice = -2e5;
vector<Node> vect;

void run(int lev, int sum, int start)
{
    if (lev == a.length() - n)
    {
        if (sum % 10 == 0)
        {
            if (maxPrice < sum)
            {
                maxPrice = sum;
            }
        }
        return;
    }
    for (int i = start; i < a.length(); i++)
    {
        path[lev] = vect[i];
        run(lev + 1, sum + vect[i].price, i + 1);
    }
}

int main()
{
    cin >> a;
    cin >> n;
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (a[i] == map[j].name)
            {
                vect.push_back(map[j]);
            }
        }
    }
    run(0, 0, 0);
    cout << maxPrice;
    return 0;
}