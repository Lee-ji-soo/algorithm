#include <iostream>
#include <queue>
using namespace std;

int getMin(int v1, int v2, int v3)
{
    int mini = 0;
    if (v1 < v2)
    {
        if (v1 < v3)
        {
            mini = v1;
        }
        else
        {
            mini = v3;
        }
    }
    else
    {
        if (v2 < v3)
        {
            mini = v2;
        }
        else
        {
            mini = v3;
        }
    }
    return mini;
}

int main()
{
    int uglyNum[10000] = {0};
    int n = 0;
    cin >> n;
    int nums[1500] = {0};
    priority_queue<int> q;
    priority_queue<int> nextUgly;
    int next = 0;

    for (int i = 0; i < n; i++)
    {
        int number = 0;
        cin >> number;
        nums[i] = number;
        q.push(number);
    }

    int big = q.top();

    int i2 = 0;
    int i3 = 0;
    int i5 = 0;

    int n2 = 2;
    int n3 = 3;
    int n5 = 5;

    uglyNum[0] = 1;
    next = 1;

    for (int i = 1; i < big + 1; i++)
    {
        int mini = getMin(n2, n3, n5);

        next = mini;
        uglyNum[i] = next;

        if (next == n2)
        {
            i2++;
            n2 = uglyNum[i2] * 2;
        }
        if (next == n3)
        {
            i3++;
            n3 = uglyNum[i3] * 3;
        }
        if (next == n5)
        {
            i5++;
            n5 = uglyNum[i5] * 5;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << uglyNum[nums[i] - 1] << " ";
    }
}
