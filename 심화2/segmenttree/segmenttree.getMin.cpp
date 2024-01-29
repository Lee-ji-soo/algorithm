/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int values[8] = {5, 2, 7, 3, 9, 15, 2, 6};
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
    int mini = min(a, b);
    segment[index] = mini;
    return mini;
}

int getMin(int tarA, int tarB, int index = 1, int s = 0, int e = 7)
{
    if (tarA <= s && tarB >= e)
        return segment[index];
    if (tarB < s || tarA > e)
        return 2e3;

    int mid = (s + e) / 2;
    int a = getMin(tarA, tarB, index * 2, s, mid);
    int b = getMin(tarA, tarB, index * 2 + 1, mid + 1, e);
    int mini = min(a, b);
    return mini;
}
int main()
{
    makeSeg(1, 0, 7);
    cout << getMin(0, 7) << endl;
    cout << getMin(0, 2) << endl;
    cout << getMin(4, 5) << endl;
    cout << getMin(2, 5) << endl;

    return 0;
}
