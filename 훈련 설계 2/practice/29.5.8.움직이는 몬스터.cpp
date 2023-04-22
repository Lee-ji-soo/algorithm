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

#include <iostream>
using namespace std;

char vect[4][4] = {""};

struct Node
{
    char ch;
    int x;
    int y;
};

Node player[20];

int direct[4][2] = {
    0, 1,
    1, 0,
    0, -1,
    -1, 0};

void move(int i)
{
    int dir = i % 4;

    for (int t = 0; t < 3; t++)
    {
        int dy = 0;
        int dx = 0;
        dy = player[t].y + direct[dir][0];
        dx = player[t].x + direct[dir][1];

        if (vect[dy][dx] == '_')
        {
            vect[player[t].y][player[t].x] = '_';
            player[t].y = dy;
            player[t].x = dx;
            vect[dy][dx] = player[t].ch;
        }
    }
}

int main()
{
    int n = 0;
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cin >> vect[y][x];
            if (vect[y][x] == 'A' || vect[y][x] == 'C' || vect[y][x] == 'D')
            {
                player[n].ch = vect[y][x];
                player[n].x = x;
                player[n].y = y;
                n++;
            }
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
            cout << vect[y][x];
        }
        cout << endl;
    }
    return 0;
}