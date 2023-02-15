#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int input[4][2] = {0};
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
        int a = input[y][0];
        int b = input[y][1];
        vector[a][b] = 5;
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