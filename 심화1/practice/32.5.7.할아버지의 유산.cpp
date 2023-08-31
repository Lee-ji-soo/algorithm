#include <iostream>
#include <algorithm>
using namespace std;

const int rows = 4;
const int cols = 8;

int land[rows][cols];

bool hasZero(int r1, int c1, int r2, int c2)
{
    for (int r = r1; r <= r2; r++)
    {
        for (int c = c1; c <= c2; c++)
        {
            if (land[r][c] == 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> land[i][j];
        }
    }

    int max_value = 0;
    for (int r1 = 0; r1 < rows; r1++)
    {
        for (int r2 = r1; r2 < rows; r2++)
        {
            for (int c1 = 0; c1 < cols; c1++)
            {
                for (int c2 = c1; c2 < cols; c2++)
                {
                    if (!hasZero(r1, c1, r2, c2))
                    {
                        int value = 0;
                        for (int r = r1; r <= r2; r++)
                        {
                            for (int c = c1; c <= c2; c++)
                            {
                                value += land[r][c];
                            }
                        }
                        max_value = max(max_value, value);
                    }
                }
            }
        }
    }

    cout << max_value;

    return 0;
}