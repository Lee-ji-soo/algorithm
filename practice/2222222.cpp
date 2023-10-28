#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int number)
{
    int count = 0;
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

int main()
{
    int i, k;
    cin >> i >> k;

    long long n = i;
    int count = 1;
    int digit = pow(10, countDigits(n));

    while (n % k != 0)
    {
        n = (n * digit) + i;
        count++;
    }

    if (count > 10000)
    {
        cout << "X";
    }

    cout << count << "번";
    return 0;
}