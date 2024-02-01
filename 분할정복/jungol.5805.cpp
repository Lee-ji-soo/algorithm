#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;

ll x, y;
int z;

int bs()
{
    int s = 1;
    int e = x;
    int mid;
    int tempZ;
    while (s <= e)
    {
        mid = (s + e) / 2;

        tempZ = ((y + mid) * 100) / (x + mid);
        if (tempZ > z)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> y;
    z = y * 100 / x;

    if (z == 100 || z == 99)
    {
        cout << -1;
        return 0;
    }

    cout << bs() << "\n";
}