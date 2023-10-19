#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N;
    cin >> N;

    priority_queue<int> lower;
    priority_queue<int, vector<int>, greater<int>> upper;
    int maps[N][2] = {0};

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < 2; x++)
        {
            int score = 0;
            cin >> score;
            maps[y][x] = score;
        }
    }

    int mid = 500;
    upper.push(500);
    for (int i = 0; i < N; i++)
    {
        int score1 = maps[i][0];
        int score2 = maps[i][1];
        if (score1 > mid)
        {
            upper.push(score1);
        }
        else
        {
            lower.push(score1);
        }
        if (score2 > mid)
        {
            upper.push(score2);
        }
        else
        {
            lower.push(score2);
        }

        // 중앙값 갱신
        while (lower.size() > upper.size())
        {
            upper.push(lower.top());
            lower.pop();
        }

        while (upper.size() > lower.size() + 1)
        {
            lower.push(upper.top());
            upper.pop();
        }

        mid = upper.top();
        cout << upper.top() << endl;
    }

    return 0;
}
