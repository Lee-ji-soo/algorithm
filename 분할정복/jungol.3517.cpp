// cin, cout 시간초과 될때
// ios::sync_with_stdio(false);
// cin.tie(NULL);
//
//

#include <iostream>
#include <vector>

using namespace std;

int n;
int narr[500000];
int q;

int find(int start, int end, int target)
{
    if (start == target)
        return start;
    if (end == target)
        return end;
    if (start > end)
        return -1;

    int mid = (start + end) / 2;

    if (narr[mid] == target)
    {
        return mid;
    }

    if (narr[mid] < target)
    {
        return find(mid + 1, end, target);
    }
    return find(start, mid - 1, target);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> narr[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        cout << find(0, n - 1, a) << " ";
    }
    return 0;
}
