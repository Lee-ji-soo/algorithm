#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int min = 1;
    int max = 50;
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        int number = 0;
        string str = "";
        cin >> number >> str;

        if (str == "UP")
        {
            int tempMin = number + 1;
            if (max < tempMin)
            {
                cout << "ERROR";
                return 0;
            }
            min = tempMin;
        }

        if (str == "DOWN")
        {
            int tempMax = number - 1;
            if (min > tempMax)
            {
                cout << "ERROR";
                return 0;
            }
            max = tempMax;
        }

        if (min == max)
        {
            cout << min;
            return 0;
        }
    }

    cout << min << " ~ " << max;
    return 0;
}