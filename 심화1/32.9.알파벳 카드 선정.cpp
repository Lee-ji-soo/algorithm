#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int n = 0;
string str = "";

int main()
{
    cin >> str;
    cin >> n;
    int len = str.length();

    sort(str.begin(), str.end());

    int startIndex = len - 6;
    int dat[200] = {0};
    int max = -26e6;
    int maxIndex = startIndex;
    for (int i = startIndex; i < len; i++)
    {
        dat[str[i]]++;
        if (max < dat[str[i]])
        {
            max = dat[str[i]];
            maxIndex = i;
        }
    }

    cout << str[maxIndex];
    return 0;
}
