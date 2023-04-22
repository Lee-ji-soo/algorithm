#include <iostream>
using namespace std;
char arr[4][4] = {""};
char result[4][4] = {""};

void move(int dir)
{
    int direct[5][2] = {
        0, 1,
        1, 0,
        0, -1,
        -1, 0,
        0, 1};

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (arr[y][x] == '_' || arr[y][x] == '#')
                continue;
            if (arr[y][x] == 'A' || arr[y][x] == 'D' || arr[y][x] == 'C')
            {
                int dy = 0;
                int dx = 0;
                dy = y + direct[dir][0];
                dx = x + direct[dir][1];

                if (dy < 0 || dx < 0 || dy > 3 || dx > 2)
                    continue;
                if (arr[dy][dx] == '#')
                    continue;
                if (arr[dy][dx] == 'A' || arr[dy][dx] == 'D' || arr[dy][dx] == 'C')
                    continue;

                result[dy][dx] = arr[y][x];
                result[y][x] = '_';
                break;
            }
        }
    }
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            arr[y][x] = result[y][x];
        }
    }
}

int main()
{
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            result[y][x] = arr[y][x];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        move(i);
    }

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << result[y][x];
        }
        cout << endl;
    }
    return 0;
}