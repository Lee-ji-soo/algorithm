#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long num = 0;
    cin >> num;
    long long result = 0;
    result = ((num * (num + 1)) / 2) % 1000000007;
    cout << (result * result) % 1000000007;
}