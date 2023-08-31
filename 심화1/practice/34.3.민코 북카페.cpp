/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Record
{
    string name;
    int t;
};

vector<string> books;
vector<Record> men;

int bs(Record m)
{
    int start = 0;
    int end = books.size() - 1;

    int count = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        count++;

        if (books[mid] == m.name)
        {
            if (m.t >= count)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        if (books[mid] > m.name)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return 0;
}

int main()
{

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string cn;
        cin >> cn;
        books.push_back(cn);
    }

    int m = 0;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string cn;
        int n;
        cin >> cn >> n;
        men.push_back({cn, n});
    }

    sort(books.begin(), books.end());

    for (int i = 0; i < men.size(); i++)
    {
        if (bs(men[i]) == 1)
        {
            cout << "pass";
        }
        else
        {
            cout << "fail";
        }
        cout << endl;
    }
    return 0;
}
