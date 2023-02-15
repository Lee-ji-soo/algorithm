#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int arr[4][4] = {0};
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            cin >> arr[y][x];
        }
    }

    int max = -99;
    int maxX = 0;
    int maxY = 0;

    int direct[6][2] = {
        0,
        0,
        0,
        1,
        0,
        2,
        1,
        0,
        1,
        1,
        1,
        2,
    };
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            int sum = 0;
            for (int i = 0; i < 6; i++)
            {
                int dy = y + direct[i][0];
                int dx = x + direct[i][1];

                if (dy < 0 || dx < 0 || dy >= 4 || dx >= 4)
                    continue;
                sum += arr[dy][dx];
            }

            if (sum > max)
            {
                max = sum;
                maxX = x;
                maxY = y;
            }
        }
    }

    cout << '(' << maxY << ',' << maxX << ')';

    return 0;
}