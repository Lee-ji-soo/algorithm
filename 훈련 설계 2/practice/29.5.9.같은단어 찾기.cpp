#include <iostream>
using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;
    string maxString = "";
    int maxLength = -99;
    int aSize = a.length();
    int bSize = b.length();
    for (int i = 0; i < aSize; i++)
    {
        int n = 0;
        while (true)
        {
            if (n + 1 > aSize)
            {
                break;
            }
            string temp = a.substr(i, n);
            int tempSize = temp.length();

            if (tempSize > bSize)
            {
                break;
            }

            int find = b.find(temp);
            if (find >= 0)
            {
                if (maxLength < tempSize)
                {
                    maxLength = temp.length();
                    maxString = temp;
                }
            }
            n++;
        }
    }
    cout << maxString;
}

#include <iostream>
using namespace std;

string a = "ABABCGKABABC";
string b = "BTBCKABABCT";
int aSize = a.length();
int bSize = b.length();

int getSize(int ai, int bi)
{
    int size = 0;
    while (true)
    {
        if (ai == aSize || bi == bSize)
            break;
        if (a[ai++] != b[bi++])
            break;
        size++;
    }
    return size;
}

int main()
{
    int size = 0;
    int maxSize = -99;
    int maxIndex = 0;
    for (int i = 0; i < aSize; i++)
    {
        for (int j = 0; j < bSize; j++)
        {
            size = getSize(i, j);
            if (maxSize < size)
            {
                maxSize = size;
                maxIndex = i;
            }
        }
    }

    for (int i = 0; i < maxSize; i++)
    {
        cout << a[i + maxIndex];
    }
}