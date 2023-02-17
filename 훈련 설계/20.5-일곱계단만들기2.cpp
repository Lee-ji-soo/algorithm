#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char c;
  cin >> c;

  for (int i = c - 3; i <= c + 3; i++)
  {
    int t = i;

    if (t < (int)'A')
      t += 26;
    if (t > (int)'Z')
      t -= 26;
    cout << char(t);
  }
  return 0;
}