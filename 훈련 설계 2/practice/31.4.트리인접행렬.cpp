#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

string str = "ABCDEF";
int arr[6][6] = {0};
char path[6] = {0};
void run(int cur)
{
    int hasChild = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[cur][i] == 0)
            continue;
        path[cur + 1] = str[i];
        hasChild = 1;
        run(i);
        path[cur + 1] = 0;
    }

    if (!hasChild)
    {
        int len = strlen(path);
        for (int j = 0; j < len; j++)
        {
            cout << path[j];
        }
        cout << endl;
        return;
    }
}

int main()
{
    for (int y = 0; y < 6; y++)
    {
        for (int x = 0; x < 6; x++)
        {
            cin >> arr[y][x];
        }
    }
    path[0] = 'A';
    run(0);
    return 0;
}