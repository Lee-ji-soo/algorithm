#include <iostream>
#include <string>
#include <vector>
using namespace std;

char path[6] = {""};
vector<vector<int>> arr(5);
void run(int num, int lev)
{
    // cout << (char)('A' + num);
    if (lev == 2)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << (char)(path[i]);
        }
        cout << endl;
    }
    for (int i = 0; i < arr[num].size(); i++)
    {
        path[lev + 1] = arr[num][i] + 'A';
        run(arr[num][i], lev + 1);
        path[lev + 1] = 0;
    }
};
int main()
{
    arr[0] = {1, 2};
    arr[1] = {3};
    arr[2] = {4, 5};
    path[0] = 0 + 'A';
    run(0, 0);
    return 0;
}