#include <iostream>
#include <cstring>
using namespace std;

int input[4][2] = {0};

int hasD(int y, int x)
{
    for (int i = 0; i < 4; i++)
    {
        if (y == input[i][0] && x == input[i][1])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> input[i][j];
        }
    }

    int vector[4][3] = {0};

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (hasD(y, x))
            {
                vector[y][x] = 5;
            }
            else
            {
                vector[y][x] = 0;
            }
        }
    }

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << vector[y][x] << ' ';
        }
        cout << endl;
    }
    return 0;
}