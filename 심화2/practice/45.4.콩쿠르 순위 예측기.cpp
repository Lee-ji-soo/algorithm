/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int maxNum = 120;
int values[120] = {0};
int segment[320] = {0};
struct Node
{
    int type, rank;
};

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

int getSum(int tarA, int tarB, int index = 1, int s = 0, int e = maxNum)
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

int updateSeg(int tarIndex, int tarValue, int index = 1, int s = 0, int e = maxNum)
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
void initSegment()
{
    for (int i = 0; i < maxNum; i++)
    {
        segment[i] = 0;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    int cnt = 1;

    vector<Node> vect;

    for (int i = 0; i < n; i++)
    {
        int type, rank;
        cin >> type >> rank;
        vect.push_back({type, rank});
    };

    values[vect[0].rank] = 1;
    makeSeg(1, 0, maxNum);
    cout << "1위" << endl;

    for (int i = 1; i < n; i++)
    {
        Node now = vect[i];
        if (now.type == 1)
        {
            cnt++;
            updateSeg(now.rank, 1);
            cout << getSum(1, now.rank) << "위" << endl;
        }
        else
        {
            updateSeg(now.rank, 0);
            cnt--;
            cout << cnt << "명" << endl;
        }
    }
    return 0;
}
