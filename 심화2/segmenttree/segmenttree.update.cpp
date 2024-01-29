/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int values[8] = {4, 5, 1, 3, 2, 0, 1, 2};
int segment[100];

int makeSeg(int index, int s, int e)
{
    if (s == e)
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

int getSum(int tarA, int tarB, int index = 1, int s = 0, int e = 7)
{
    if (tarA <= s && tarB >= e)
        return segment[index];
    if (tarB < s || tarA > e)
        return 0;

    int mid = (s + e) / 2;
    int a = getSum(tarA, tarB, index * 2, s, mid);
    int b = getSum(tarA, tarB, index * 2 + 1, mid + 1, e);
    return a + b;
}

int updateSeg(int tarIndex, int tarValue, int index = 1, int s = 0, int e = 7)
{
    if (!(s <= tarIndex && tarIndex <= e))
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
    int a = updateSeg(tarIndex, tarValue, index * 2, s, mid);
    int b = updateSeg(tarIndex, tarValue, index * 2 + 1, mid + 1, e);

    segment[index] = a + b;
    return segment[index];
}

int main()
{
    makeSeg(1, 0, 7);
    cout << getSum(2, 5) << endl;
    updateSeg(2, 9);
    cout << getSum(2, 5);
    return 0;
}
