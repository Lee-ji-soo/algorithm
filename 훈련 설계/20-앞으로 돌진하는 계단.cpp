#include <iostream>
using namespace std;

int main()
{
  char arr[11] = {""};
  cin >> arr;

  int len = -1;
  for (int i = 0; i < 11; i++)
  {
    if (arr[i] == '\0')
    {
      break;
    }
    len++;
  };

  for (int i = 0; i <= len; i++)
  {
    for (int j = len - i; j <= len; j++)
    {
      cout << arr[j];
    }
    cout << endl;
  }
  return 0;
}