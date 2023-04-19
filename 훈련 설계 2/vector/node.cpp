/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

struct Node
{
    int a;
    char c;
};

int main()
{
    vector<Node> sss(4);

    sss.push_back({3, 'A'});
    sss.push_back({4, 'B'});
    sss.push_back({5, 'Q'});
    sss.push_back({1, 'Z'});

    for (int i = 0; i < sss.size(); i++)
    {
        cout << sss[i].a << ',' << sss[i].c << endl;
    }
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

struct Node
{
    char a;
    char b;
};

int main()
{
    vector<Node> arr;

    for (int i = 0; i < 4; i++)
    {
        char t, q;
        cin >> t >> q;
        arr.push_back({t, q});
    }

    swap(arr[0], arr[arr.size() - 1]);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].a << ", " << arr[i].b << endl;
    }
    return 0;
}