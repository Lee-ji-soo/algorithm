#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    int N = 0;
    int K = 0;

    cin >> N >> K;

    int map[N][N] = {0};

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            cin >> map[y][x];
        }
    }

    // 0,0 => 0,4
    // 0,1 => 1,4
    // 0,2 => 2,4
    // 0,3 => 3,4
    // 0,4 => 4,4

    // 1,0 => 0,3
    // 1,1 => 1,3
    // 1,2 => 2,3
    // 1,3 => 3,3
    // 1,4 => 4,3

    // 2,0 => 0,2
    // 2,1 => 1,2
    // 2,2 => 2,2
    // 2,3 => 3,2
    // 2,4 => 4,2

    int temp[N][N] = {0};

    for (int i = 0; i < K; i++)
    {
        int dy = 0;
        int dx = 0;

        for (int y = 0; y < N; y++)
        {
            for (int x = 0; x < N; x++)
            {
                dy = x;
                dx = (N - 1) - y;

                if (dy < 0 || dy >= N || dx < 0 || dx >= N)
                    continue;
                temp[dy][dx] = map[y][x];
            }
        }

        // memcpy = memory copy;
        memcpy(map, temp, 4 * N * N);
    }

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            cout << map[y][x] << " ";
        }
        cout << endl;
    }

    return 0;
}