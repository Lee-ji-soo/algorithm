#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
vector<vector<int>> v(50);

struct Node
{
    int n;
    int lev;
};

queue<Node> q;

int solution(string begin, string target, vector<string> words)
{
    words.push_back(begin);
    int wordSize = words.size();

    for (int k = 0; k < wordSize; k++)
    {
        for (int y = 0; y < wordSize; y++)
        {
            int cnt = 3;
            for (int i = 0; i < words[y].length(); i++)
            {
                if (words[k][i] != words[y][i])
                {
                    cnt--;
                }
            }
            if (cnt == 2)
            {
                v[k].push_back(y);
            }
        }
    }

    int used[50];
    for (int i = 0; i < wordSize; i++)
    {
        used[i] = 0;
    }

    q.push({wordSize - 1, 0});
    used[wordSize - 1] = 1;

    int min = 99;

    while (!q.empty())
    {
        Node num = q.front();
        q.pop();

        if (words[num.n] == target)
        {
            if (min > num.lev)
            {
                min = num.lev;
            }
        }

        int vSize = v[num.n].size();
        for (int i = 0; i < vSize; i++)
        {
            int temp = v[num.n][i];
            if (used[temp] == 1)
                continue;
            used[temp] = 1;
            q.push({temp, num.lev + 1});
        }
    }
    if (min == 99)
    {
        return 0;
    }
    else
    {
        return min;
    }
}