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
using namespace std;

int main()
{
    vector<vector<int>> alist(4);
    // 노드가 연결된 것이 적을 때 메모리 절약, 탐색 속도에 좋다.
    alist[1] = {0, 3};
    alist[2] = {1, 3};

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
using namespace std;

int main()
{
    vector<vector<int>> alist(5);
    string s = "DUSRK";

    alist[0] = {1, 3, 4};
    alist[1] = {2, 3};
    alist[3] = {2, 4};
    alist[4] = {1, 3};

    int num = 2;

    for (int i = 0; i < alist[num].size(); i++)
    {
        cout << s[alist[num][i]];
    }
    return 0;
}