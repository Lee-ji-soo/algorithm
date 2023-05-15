/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int answer = 0;
int used[13] = {0};
int path[3] = {0};
void run(int start, int lev, int sum, vector<int> n)
{
    if (lev == 3)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << path[i];
        }
        cout << endl;
        if (sum == 0)
        {
            answer++;
        }
        return;
    }
    for (int i = start; i < n.size(); i++)
    {
        if (used[i] == 1)
            continue;
        used[i] = 1;
        path[lev] = n[i];
        run(i + 1, lev + 1, sum + n[i], n);
        used[i] = 0;
    }
}

int solution(vector<int> number)
{
    run(0, 0, 0, number);
    cout << answer;
    return answer;
}

int main()
{
    solution({-2, 3, 0, 2, -5});
    return 0;
}