#include <iostream>
using namespace std;

int map[6][6];
int start;
void input()
{
    map[0][2] = 1;
    map[0][3] = 1;
    map[0][5] = 1;
    map[1][3] = 1;
    map[1][4] = 1;
    map[1][5] = 1;
    map[2][4] = 1;
    map[2][5] = 1;
    map[4][0] = 1;
    map[4][5] = 1;
    cin >> start;
}
int visited[6];
void dfs(int now)
{
    cout << now << " ";
    for (int next = 0; next < 6; next++)
    {
        if (map[now][next] == 0)
            continue;
        if (visited[next] == 1)
            continue;
        visited[next] = 1;
        dfs(next);
    }
}
int main()
{
    input();

    visited[start] = 1;
    dfs(start);
    return 0;
}
