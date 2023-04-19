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

int main()
{
    vector<int> arr = {3, 5, 7, 8};
    for (auto i = arr.begin(); i != arr.end(); ++i)
    {
        cout << *i;
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
    int a, b;
};
int main()
{
    vector<Node> arr = {{1, 2}, {3, 4}};
    for (auto i = arr.begin(); i != arr.end(); ++i)
    {
        cout << i->a << " " << i->b << endl;
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
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
    return 0;
}