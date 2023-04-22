#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int main()
{
    q.push(1);
    q.push(2);
    q.push(5);
    q.push(7);

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    // 1,2,5,7 // q.front() : 1

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    cout << q.front();
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

vector<vector<int>> vect(7);
queue<int> q3;

int main()
{
    vect[5] = {3, 1};
    vect[3] = {2};
    vect[1] = {4};
    vect[4] = {0, 6};

    q3.push(5);

    while (!q3.empty())
    {
        int temp = q3.front();
        cout << temp << " ";
        q3.pop();

        for (int i = 0; i < vect[temp].size(); i++)
        {
            q3.push(vect[temp][i]);
        }
    }
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

vector<vector<int>> vect(7);
queue<int> q;

int main()
{
    string str = "ACBQTPR";

    vect[0] = {1, 2, 3};
    vect[2] = {4};
    vect[3] = {5, 6};

    q.push(0);

    while (!q.empty())
    {
        int now = q.front();
        cout << str[now] << " ";
        q.pop();

        for (int i = 0; i < vect[now].size(); i++)
        {
            q.push(vect[now][i]);
        }
    }
}