#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> want = {"banana", "apple", "rice", "pork", "pot"};
vector<int> number = {3, 2, 2, 2, 1};
vector<string> discount = {"chicken", "apple", "apple", "banana",
                           "rice", "apple", "pork", "banana",
                           "pork", "rice", "pot", "banana", "apple", "banana"};

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;

    int r = 0;
    while (r + 10 <= discount.size())
    {
        int ns = number.size();
        vector<int> tempNumber = {number.begin(), number.end()};

        int ws = want.size();
        for (int k = 0; k < ws; k++)
        {
            for (int j = r; j < r + 10; j++)
            {
                if (discount[j] == want[k])
                {
                    tempNumber[k]--;
                }
            }
        }

        int sum = 0;
        int flag = 1;
        for (int i = 0; i < ws; i++)
        {
            if (tempNumber[i] > 0)
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            answer++;
        }
        flag = 1;
        r++;
    }

    cout << answer;
    return answer;
}

int main()
{
    solution(want, number, discount);
}