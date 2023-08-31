/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool comp(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return s1 < s2; // string 사전순
    }
    else
    {
        return s1.length() < s2.length();
    }
}

int main()
{
    int n = 0;
    cin >> n;
    string sArr[20] = {""};

    for (int i = 0; i < n; i++)
    {
        cin >> sArr[i];
    }

    sort(sArr, sArr + n, comp);

    // 출력
    for (int i = 0; i < n; i++)
    {
        cout << sArr[i] << endl;
    }
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

string vect[20];
int n;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = y + 1; x < n; x++)
        {
            if (vect[y].length() > vect[x].length())
                swap(vect[y], vect[x]);
            else if (vect[y].length() == vect[x].length() && vect[y] > vect[x])
                swap(vect[y], vect[x]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << "\n";
    }

    return 0;
}