#include <iostream>
using namespace std;

int main()
{
    struct sketchbook
    {
        char image[3][3];
    };

    struct sketchbook images = {
        {0}};

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cin >> images.image[y][x];
        }
    }

    int dat[200] = {0};

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            dat[(int)images.image[y][x]]++;
        }
    }

    for (int i = 65; i < 200; i++)
    {
        if (dat[i] >= 1)
        {
            cout << (char)i;
        }
    }

    return 0;
}