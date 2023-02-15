#include <iostream>

using namespace std;

int arr[5][5] = {
    3, 3, 5, 3, 1,
    2, 2, 4, 2, 6,
    4, 9, 2, 3, 4,
    1, 1, 1, 1, 1,
    3, 3, 5, 9, 2};

int direct[4][2] = {
    // y x
    -1, -1,
    -1, 1,
    1, -1,
    1, 1};

int sum(int y, int x)
{
    int result = 0;
    for (int i = 0; i < 4; i++)
    {
        int dy = y + direct[i][0];
        int dx = x + direct[i][1];

        if (dy < 0 || dx < 0 || dy >= 5 || dx >= 5)
        {
            continue;
        }
        result += arr[dy][dx];
    }
    return result;
}

int main()
{
    int max = -99;
    int maxX = 0;
    int maxY = 0;

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            int temp = sum(y, x);
            if (temp > max)
            {
                max = temp;
                maxY = y;
                maxX = x;
            }
        }
    }

    cout << maxY << " " << maxX;
    return 0;
}