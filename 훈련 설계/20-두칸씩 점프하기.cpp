#include <iostream>

using namespace std;

int count = 0;
void abc(int x)
{
  if (count == 3)
  {
    cout << x << " ";
    return;
  }
  count++;
  abc(x + 2);
  cout << x << " ";
}

int main()
{
  int a;
  cin >> a;
  abc(a);
  return 0;
}