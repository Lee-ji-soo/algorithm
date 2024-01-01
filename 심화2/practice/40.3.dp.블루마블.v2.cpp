#include <iostream>
using namespace std;

int map[50];
int acc[50];
int maxim;

void write(int index, int value)
{
    if (index >= 12 && maxim < value)
        maxim = value;
    if (acc[index] < value)
        acc[index] = value;
}

int main()
{
    for (int i = 0; i < 12; i++)
    {
        cin >> map[i];
        acc[i] = -99999;
    }

    int a, b, c;
    acc[0] = map[0];

    for (int i = 0; i < 12; i++)
    {
        write(i + 2, acc[i] + map[i + 2]);
        write(i + 3, acc[i] + map[i + 3]);
        write(i * 2, acc[i] + map[i * 2]);
    }

    cout << maxim;

    return 0;
}