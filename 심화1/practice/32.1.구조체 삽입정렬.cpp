/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int n;
    char ch;
};

int compare(Node a, Node b)
{
    if (a.n < b.n)
    {
        return 1;
    }
    if (b.n < a.n)
    {
        return 0;
    }

    return a.ch < b.ch;
}
int main()
{
    int n = 0;
    cin >> n;
    vector<Node> vect;
    for (int i = 0; i < n; i++)
    {
        int N = 0;
        char C = '0';
        cin >> N >> C;
        vect.push_back({N, C});
    }

    sort(vect.begin(), vect.end(), compare);

    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i].n << " " << vect[i].ch << endl;
    }
    return 0;
}