#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[10] = {""};
    char b, c;
    cin >> a;
    cin >> b >> c;

    int len;
    len = strlen(a);

    int bIndex;
    int cIndex;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == b)
        {
            bIndex = i;
        }
        if (a[i] == c)
        {
            cIndex = i;
        }
    }

    int bl;
    int br;
    int cl;
    int cr;

    bl = bIndex - 1;
    br = bIndex + 1;
    cl = cIndex - 1;
    cr = cIndex + 1;

    // 1. find Index b, c from a
    // 2. for strlen [0, b-1], [0,b+1] [0, a-1], [0,a+1];
    // 3. if b-1, b+1, a-1, a+1 out of range continue;

    for (int i = 0; i < len; i++)
    {
        if (i == bl || i == br || i == cl || i == cr)
        {
            cout << "#";
        }
        else
        {
            cout << a[i];
        }
    }

    return 0;
}
