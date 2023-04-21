#include <iostream>
using namespace std;

string str = "";
int arr[8][8] = {0};

void run(int num)
{
    cout << str[num];
    for (int i = 0; i < 8; i++)
    {
        if (arr[num][i] == 1)
        {
            run(i);
        }
    }
}

int main()
{
    cin >> str;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }

    run(0);
    return 0;
}