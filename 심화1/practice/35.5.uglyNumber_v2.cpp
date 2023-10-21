#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int result[10000] = {0};

    int cnt = 0;
    long long next = 0;
    long long prev = -1;

    int big = 0;
    int nums[1500] = {1, 9, 10};
    priority_queue<int> numbers;
    priority_queue<int, vector<int>, greater<int>> uglyQue;

    uglyQue.push(1);
    int n = 3;
    numbers.push(1);
    numbers.push(9);
    numbers.push(10);
    big = numbers.top();

    while (true)
    {
        next = uglyQue.top();
        uglyQue.pop();

        if (prev == next)
            continue;
        prev = next;

        cnt++;
        result[cnt] = next;
        if (cnt == big + 1)
            break;

        uglyQue.push(next * 2);
        uglyQue.push(next * 3);
        uglyQue.push(next * 5);
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[nums[i]] << " ";
    }

    return 0;
}
