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

int compare(int a, int b)
{
    return a < b;
}

int main()
{
    int n = 0;
    int tapeN = 0;
    cin >> n >> tapeN;
    int restTape = tapeN;
    vector<int> map;

    for (int i = 0; i < n; i++)
    {
        int a = 0;
        cin >> a;
        map.push_back(a);
    }

    sort(map.begin(), map.end(), compare);
    int cnt = 1;
    int tie = map[0];
    for (int i = 1; i < map.size(); i++)
    {
        if (map[i] - tie < tapeN)
        {
            continue;
        }
        else
        {
            cnt++;
            tie = map[i];
        }
    }

    cout << cnt;
    return 0;
}