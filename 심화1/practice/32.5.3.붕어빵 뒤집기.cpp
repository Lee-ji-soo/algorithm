#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    char origin[3][7] = {
        "ABCEFG",
        "HIJKLM",
        "NOPQRS"};

    char temp[3][7] = {""};

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 6; x++)
        {
            temp[y][x] = origin[y][x];
        }
    }

    string s = "";
    cin >> s;
    int n = s.length();

    int direct[5][2] = {
        0,
        0,
        -1,
        0,
        1,
        0,
        0,
        -1,
        0,
        1,
    };

    for (int i = 0; i < n; i++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 6; x++)
            {
                if (origin[y][x] != s[i])
                    continue;
                // dy,dx;
                int dy = 0;
                int dx = 0;
                for (int j = 0; j < 5; j++)
                {
                    dy = y + direct[j][0];
                    dx = x + direct[j][1];

                    if (dy < 0 || dy >= 3 || dx < 0 || dx >= 6)
                        continue;

                    if (temp[dy][dx] == '#')
                    {
                        temp[dy][dx] = origin[dy][dx];
                    }
                    else
                    {
                        temp[dy][dx] = '#';
                    }
                }
            }
        }
    }

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 6; x++)
        {
            cout << temp[y][x];
        }
        cout << endl;
    }
    return 0;
}