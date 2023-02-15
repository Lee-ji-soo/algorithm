#include <iostream>
using namespace std;

void divide(int c)
{
  if (c == 0)
    return;
  divide(c / 2);
  cout << c << " ";
}
int main()
{
  int c;
  cin >> c;

  divide(c);
  return 0;
}