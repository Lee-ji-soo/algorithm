/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

long long values[1100000];
long long segment[1100000];
long long commands[1100000][3];
int n, m;

long long makeSeg(int index, int s, int e)
{
    if (e < s)
    {
        return 0;
    }
    if (e == s)
    {
        segment[index] = values[s];
        return values[s];
    }

    int mid = (s + e) / 2;
    int a = makeSeg(index * 2, s, mid);
    int b = makeSeg(index * 2 + 1, mid + 1, e);
    segment[index] = a + b;
    return a + b;
}

long long update(int tarIndex, int tarValue, int index = 1, int s = 0, int e = n - 1)
{
    if (!(s <= tarIndex && e >= tarIndex))
    {
        return segment[index];
    }

    if (s == e)
    {
        values[tarIndex] = tarValue;
        segment[index] = tarValue;
        return tarValue;
    }

    int mid = (s + e) / 2;
    long long a = update(tarIndex, tarValue, index * 2, s, mid);
    long long b = update(tarIndex, tarValue, index * 2 + 1, mid + 1, e);

    segment[index] = a + b;
    return a + b;
}
long long getSum(int tarA, int tarB, int index = 1, int s = 0, int e = n - 1)
{
    if (e < s)
    {
        return 0;
    }
    if (tarB < s || tarA > e)
    {
        return 0;
    }
    if (tarA <= s && tarB >= e)
    {
        return segment[index];
    }

    int mid = (s + e) / 2;
    long long a = getSum(tarA, tarB, index * 2, s, mid);
    long long b = getSum(tarA, tarB, index * 2 + 1, mid + 1, e);
    return a + b;
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
        int type, s, e;
        cin >> type >> s >> e;
        if (type == 2)
        {
            cout << getSum(s - 1, e - 1) << endl;
        }
        else
        {
            update(s - 1, e);
        }
    }
    return 0;
}