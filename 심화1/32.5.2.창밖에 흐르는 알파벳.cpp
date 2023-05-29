/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "";
    cin >> a;
    int sum = 0;
    int len = a.length();
    for (int i = 0; i < len; i++)
    {
        sum += a[i] - 'A' + 1;
    }

    while (true)
    {
        for (int i = 0; i < len; i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                cout << a[i];
            }
            else
            {
                cout << '_';
            }
        }
        cout << endl;

        if (sum <= 0)
        {
            break;
        }

        for (int i = 0; i < len; i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                a[i] = (char)(a[i] - 1);
                sum -= 1;
            }
        }
    }
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/** 각 알파벳에서 'A'까지의 알파벳으로 나열하고 시작하는 방법*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
string target;
vector<char> win[11];

int main()
{
    cin >> target;
    int tn = target.length();

    // 연속된 알파벳 만들기
    for (int i = 0; i < tn; i++)
    {
        for (char x = target[i]; x >= 'A'; x--)
        {
            win[i].push_back(x);
        }
    }

    // map에 채우기
    int maxn = 0;
    char map[11][11] = {0};
    for (int x = 0; x < tn; x++)
    {
        int yn = win[x].size();
        if (yn > maxn)
            maxn = yn;
        for (int y = 0; y < yn; y++)
        {
            map[y][x] = win[x][y];
        }
    }

    // 출력
    for (int y = 0; y <= maxn; y++)
    {
        for (int x = 0; x < tn; x++)
        {
            if (map[y][x] == 0)
                cout << "_";
            else
                cout << map[y][x];
        }
        cout << endl;
    }

    return 0;
}