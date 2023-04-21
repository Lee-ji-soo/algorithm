#include <iostream>
using namespace std;

int arr[7][7] = {0};

void run(int num)
{
    cout << num << " ";
    for (int i = 0; i < 7; i++)
    {
        if (arr[num][i] == 1)
        {
            run(i);
        }
    }
}

int main()
{
    int n = 0;
    cin >> n;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }
    run(0);
    return 0;
}