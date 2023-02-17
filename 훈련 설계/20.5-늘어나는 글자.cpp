#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char a[10] = {""};
  cin >> a;

  int len = 0;
  for (int i = 0; i < 10; i++)
  {
    if (a[i] == '\0')
    {
      len = i;
      break;
    }
  }

  for (int y = 0; y < len; y++)
  {
    for (int x = 0; x <= y; x++)
    {
      cout << a[x] << "";
    }
    cout << endl;
  }

  return 0;
}