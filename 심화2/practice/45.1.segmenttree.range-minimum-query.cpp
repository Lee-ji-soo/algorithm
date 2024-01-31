/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int values[1100000];
int segment[1100000];
int n, m;
int makeSeg(int index, int s, int e)
{
    if (s == e)
    {
        segment[index] = values[s];
        return values[s];
    }
    if (s > e)
        return 2e6;

    int mid = (s + e) / 2;
    int a = makeSeg(index * 2, s, mid);
    int b = makeSeg(index * 2 + 1, mid + 1, e);
    int mini = min(a, b);
    segment[index] = mini;
    return mini;
}

int getMin(int tarA, int tarB, int index = 1, int s = 0, int e = n - 1)
{
    if (tarB < s || tarA > e || s > e)
    {
        return 2e6;
    }
    if (tarA <= s && tarB >= e)
    {
        return segment[index];
    }
    int mid = (s + e) / 2;
    int a = getMin(tarA, tarB, index * 2, s, mid);
    int b = getMin(tarA, tarB, index * 2 + 1, mid + 1, e);
    int mini = min(a, b);
    return mini;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }

    makeSeg(1, 0, n - 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << getMin(a - 1, b - 1) << endl;
    }
    return 0;
}