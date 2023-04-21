#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[10][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int boss = 0;
    for (int y = 0; y < 7; y++)
    {
        for (int x = 0; x < 7; x++)
        {
            if (arr[y][x] == 1 && x == 0)
            {
                boss = y;
                cout << "boss:" << boss;
                cout << endl;
            }
        }
    }

    cout << "under:";
    for (int i = 0; i < 7; i++)
    {
        if (arr[0][i] == 1 && i != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}