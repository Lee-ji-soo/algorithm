/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int map[4][5] = {
    4, 5, 1, 0, 1,
    1, 1, 0, 1, 2,
    1, 0, -1, 0, 1,
    0, 1, 1, 1, 1};

int sum[4][5] = {
    4, 5, 1, 0, 1,
    1, 1, 0, 1, 2,
    1, 0, -1, 0, 1,
    0, 1, 1, 1, 1};

int direct[3][2] = {
    -1, 0,
    0, -1,
    -1, -1};
int main()
{
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            for (int i = 0; i < 3; i++)
            {
                int dy, dx;
                int temp = sum[y][x];
                dy = y + direct[i][0];
                dx = x + direct[i][1];
                if (dy < 0 || dx < 0 || dy >= 4 || dx >= 5)
                    continue;

                temp += sum[dy][dx];
                sum[y][x] = temp;
            }
        }
    }
    return 0;
}
