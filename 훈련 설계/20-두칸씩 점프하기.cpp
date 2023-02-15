#include <iostream>

using namespace std;

int c = 0;
void abc(int x)
{
  if (c == 3)
  {
    cout << x << " ";
    return;
  }
  c++;
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