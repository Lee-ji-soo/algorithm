/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int values[1100000];
int segment[1100000];
int commands[1100000][3];
int n, m;
int INT_MAX = 2e5;

int makeSeg(int index, int s, int e)
{
    if (e < s)
    {
        return INT_MAX;
    }
    if (e == s)
    {
        segment[index] = values[s];
        return values[s];
    }

    int mid = (s + e) / 2;
    int a = makeSeg(index * 2, s, mid);
    int b = makeSeg(index * 2 + 1, mid + 1, e);
    int mini = min(a, b);
    segment[index] = mini;
    return mini;
}

int update(int tarIndex, int tarValue, int index = 1, int s = 0, int e = n - 1)
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
    int a = update(tarIndex, tarValue, index * 2, s, mid);
    int b = update(tarIndex, tarValue, index * 2 + 1, mid + 1, e);

    int mini = min(a, b);
    segment[index] = mini;
    return mini;
}
int getMini(int tarA, int tarB, int index = 1, int s = 0, int e = n - 1)
{
    if (e < s)
    {
        return INT_MAX;
    }
    if (tarB < s || tarA > e)
    {
        return INT_MAX;
    }
    if (tarA <= s && tarB >= e)
    {
        return segment[index];
    }

    int mid = (s + e) / 2;
    int a = getMini(tarA, tarB, index * 2, s, mid);
    int b = getMini(tarA, tarB, index * 2 + 1, mid + 1, e);
    int mini = min(a, b);
    return mini;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }

    makeSeg(1, 0, n - 1);
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int type, s, e;
        cin >> type >> s >> e;
        if (type == 2)
        {
            cout << getMini(s - 1, e - 1) << endl;
        }
        else
        {
            update(s - 1, e);
        }
    }
    return 0;
}