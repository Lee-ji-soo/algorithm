#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string hero = "BIAH";
    int a = 0;
    cin >> a;
    char path[5] = {""};
    int k = 0;
    int j = 0;
    while (true)
    {
        int pLen = strlen(path);
        if (pLen == 4)
        {
            break;
        }

        for (int i = 0; i < 4; i++)
        {
            if (hero[i] == '0')
                continue;
            if (k > 0 && (k + 1) % a == 0)
            {
                path[j++] = hero[i];
                hero[i] = '0';
            }
            k++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << path[i] << " ";
    }
    return 0;
}