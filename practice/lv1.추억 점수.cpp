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

struct Map
{
    string name;
    int year;
};
vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)
{
    vector<int> answer(0);
    vector<Map> map;
    for (int i = 0; i < name.size(); i++)
    {
        map.push_back({name[i], yearning[i]});
    }

    for (int y = 0; y < photo.size(); y++)
    {
        int sum = 0;
        for (int x = 0; x < photo[y].size(); x++)
        {
            for (int i = 0; i < map.size(); i++)
            {
                if (map[i].name == photo[y][x])
                {
                    sum += map[i].year;
                }
            }
        }
        answer.push_back(sum);
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << ". ";
    }
    return answer;
}
int main()
{
    solution(
        {"may", "kein", "kain", "radi"},
        {5, 10, 1, 3},
        {{"may", "kein", "kain", "radi"},
         {"may", "kein", "brin", "deny"},
         {"kon", "kain", "may", "coni"}});
    return 0;
}