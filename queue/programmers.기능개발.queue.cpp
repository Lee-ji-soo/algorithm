#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <math.h>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    queue<int> rest;
    int size = progresses.size();
    for (int i = 0; i < size; i++)
    {
        int restDay = (100 - progresses[i] - 1) / speeds[i] + 1;
        if (restDay < 0)
        {
            restDay = 1;
        }
        rest.push(restDay);
    }

    int cnt = 1;
    int temp = rest.front();
    rest.pop();

    while (!rest.empty())
    {
        int top = rest.front();
        rest.pop();

        if (temp >= top)
        {
            cnt++;
            // temp -= top;
        }
        else
        {
            temp = top;
            answer.push_back(cnt);
            cnt = 1;
        }
    }
    answer.push_back(cnt);
    return answer;
}

int main()
{

    solution({98, 99, 98}, {1, 1, 1});
    return 0;
}