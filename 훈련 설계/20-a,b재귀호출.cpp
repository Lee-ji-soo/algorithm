#include <iostream>
using namespace std;

int a;
int b;

void abc(int a)
{
  cout << a << " ";
  if (a == b)
  {
    return;
  }
  abc(a + 1);
  cout << a << " ";
}
int main()
{
  cin >> a >> b;

  abc(a);
  return 0;
}