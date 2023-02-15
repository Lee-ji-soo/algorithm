#include <iostream>

using namespace std;

int main()
{
    char arr[4][5] = {""};
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            arr[y][x] = '_';
        }
    }

    int num[2][2] = {0};

    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 2; x++)
        {
            cin >> num[y][x];
        }
    }

    int direct[8][2] = {
        // y x
        -1, -1,
        -1, 0,
        -1, 1,
        0, -1,
        0, 1,
        1, -1,
        1, 0,
        1, 1};

    for (int i = 0; i < 2; i++)
    {
        for (int y = 0; y < 8; y++)
        {
            int dy = num[i][0] + direct[y][0];
            int dx = num[i][1] + direct[y][1];

            if (dy < 0 || dx < 0 || dy >= 4 || dx >= 5)
                continue;

            arr[dy][dx] = '#';
        }
    }

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cout << arr[y][x] << " ";
        }
        cout << endl;
    }
    return 0;
}