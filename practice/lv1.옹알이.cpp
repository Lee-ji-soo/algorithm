/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int answer = 0;
string path[4] = {""};
int used[4] = {0};

void run(int lev, vector<string> aa, vector<string> babbling)
{
    string temp = "";
    for (int i = 0; i < 4; i++)
    {
        temp += path[i];
    }

    for (int i = 0; i < babbling.size(); i++)
    {
        if (temp == babbling[i])
        {
            cout << temp << "," << babbling[i] << endl;
            answer++;
            break;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (used[i] == 1)
            continue;
        used[i] = 1;
        path[lev] = aa[i];
        run(lev + 1, aa, babbling);
        path[lev] = "";
        used[i] = 0;
    }
}

int main()
{
    vector<string> aa;
    aa = {"aya", "ye", "woo", "ma"};

    vector<string> babbling;
    babbling = {"yeaya", "wooaya", "ma", "ma", "oo"};

    run(0, aa, babbling);
    cout << answer;
    return 0;
}