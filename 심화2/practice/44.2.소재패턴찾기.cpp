/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
struct Node
{
    int y, x;
};
int main()
{
    int n = 0;
    int m = 0;
    cin >> n >> m;

    unordered_multimap<string, Node> um;

    string map[1000];
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> map[i];
    }
    int k = 0;
    cin >> k;
    string pattern[20];
    for (int i = 0; i < k; i++)
    {
        cin >> pattern[i];
    }

    string temp;
    for (int i = 0; i < k; i++)
    {
        temp += pattern[i];
    }

    for (int y = n - k; y >= 0; y--)
    {
        for (int x = m - k; x >= 0; x--)
        {
            string str;
            for (int j = y; j < y + k; j++)
            {
                str += map[j].substr(x, k);
            }
            if (temp[0] != str[0])
                continue;
            um.insert({str, {y, x}});
        }
    }

    auto uml = um.equal_range(temp);
    for (auto i = uml.first; i != uml.second; ++i)
    {
        cout << i->second.y << "," << i->second.x << endl;
    }
    return 0;
}