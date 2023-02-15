#include <iostream>

using namespace std;

void countDown(int x)
{
    cout << x << " ";
    if (x == 0)
    {
        return;
    }

    countDown(x - 1);
    cout << x << " ";
}
int main()
{
    int n;
    cin >> n;
    countDown(n);
    return 0;
}