#include <iostream>
using namespace std;

int map[3][3] = {
    3, 5, 1,
    3, 8, 1,
    1, 1, 5};

int bitarray[2][2] = {0};

int getPatternMax(int dy, int dx)
{
    int sum = 0;
    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 2; x++)
        {
            if (bitarray[y][x] == 1)
            {
                if (y + dy > 2 || x + dx > 2)
                    continue;
                sum += map[y + dy][x + dx];
            }
            else
            {
                continue;
            }
        }
    }
    return sum;
}
int main()
{
    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 2; x++)
        {
            cin >> bitarray[y][x];
        }
    };

    int max = -99;
    int maxX = 0;
    int maxY = 0;

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            int temp = getPatternMax(y, x);
            if (temp > max)
            {
                max = temp;
                maxY = y;
                maxX = x;
            }
        }
    }
    cout << '(' << maxY << ',' << maxX << ')';
    return 0;
}