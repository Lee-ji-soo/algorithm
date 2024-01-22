/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int map[100] = {4, 5, 1, 3, -2, -3, 9, 4};
int sum[100];

int getSum(int n, int m)
{
    return sum[m] - sum[n - 1];
}

int main()
{
    int m = 0;
    for (int i = 0; i < 8; i++)
    {
        m += map[i];
        sum[i] = m;
    }

    for (int i = 0; i < 2; i++)
    {
        int n, m;
        cin >> n >> m;

        cout << getSum(n, m);
    }

    return 0;
}
