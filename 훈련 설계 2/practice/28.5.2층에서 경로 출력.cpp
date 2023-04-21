#include <iostream>
using namespace std;

int arr[9][9] = {0};

int path[3] = {0};
void run(int num, int lev)
{
    if (lev == 2)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < 9; i++)
    {
        if (arr[num][i] == 1)
        {
            path[lev + 1] = i;
            run(i, lev + 1);
            path[lev + 1] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    run(0, 0);
    return 0;
}