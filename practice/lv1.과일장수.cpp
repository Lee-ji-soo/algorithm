// 문제 풀이 1.
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int compare(int a, int b)
{
    return a > b;
}
int solution(int k, int m, vector<int> score)
{
    sort(score.begin(), score.end(), compare);

    int sum = 0;
    for (int i = m - 1; i < score.size(); i++)
    {
        int min = score[i];
        sum += (min * m);
        i += (m - 1);
    }
    cout << sum;
    return sum;
}

int main()
{
    solution(4, 3, {4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2});
    return 0;
}

// 문제 풀이 2.
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int compare(int a, int b)
{
    return a > b;
}
int solution(int k, int m, vector<int> score)
{
    sort(score.begin(), score.end(), compare);

    int sum = 0;
    int temp = m - 1;
    while (true)
    {
        if (temp > score.size())
        {
            break;
        }
        int min = score[temp];
        sum += (min * m);
        temp += m;
    }
    cout << sum;
    return sum;
}

int main()
{
    solution(3, 4, {1, 2, 3, 1, 2, 3, 1});
    return 0;
}

// 시간 초과 답변

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int compare(int a, int b)
{
    return a > b;
}
int solution(int k, int m, vector<int> score)
{
    sort(score.begin(), score.end(), compare);

    int sum = 0;

    while (true)
    {
        if (score.size() < m)
        {
            break;
        }
        int min = score[m - 1];
        for (int i = 0; i < m; i++)
        {
            score.erase(score.begin());
        }
        sum += (min * m);
    }
    cout << sum;
    return sum;
}

int main()
{
    solution(4, 3, {4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2});
    return 0;
}