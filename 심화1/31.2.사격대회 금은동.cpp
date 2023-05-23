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

struct Node
{
    string name;
    int score;
};
vector<Node> result;
int compare(Node a, Node b)
{
    if (a.score == b.score)
    {
        return a.name > b.name;
    }
    return a.score > b.score;
}
int main()
{
    int n = 0;
    cin >> n;

    vector<Node> man;

    for (int i = 0; i < n; i++)
    {
        string S;
        int I;
        cin >> S >> I;
        man.push_back({S, I});
    }

    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 2)
        {
            temp = 2;
            if (result[temp].score <= man[i].score)
            {
                result[temp] = man[i];
            }
            else
            {
                continue;
            }
        }
        else
        {
            temp = i;
            result.push_back(man[i]);
        }

        sort(result.begin(), result.end(), compare);
        for (auto y = result.begin(); y != result.end(); ++y)
        {
            cout << (*y).name << " ";
        }
        cout << endl;
    }
    return 0;
}