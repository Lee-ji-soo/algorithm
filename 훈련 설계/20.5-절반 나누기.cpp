#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char arr[10] = {""};
  cin >> arr;

  int len = 0;

  for (int i = 0; i < 10; i++)
  {
    if (arr[i] == '\0')
    {
      len = i;
      break;
    }
  }

  int mid = len / 2;
  int flag = 1;
  for (int i = 0; i < mid; i++)
  {
    if (arr[i] != arr[i + mid])
    {
      flag = 0;
      break;
    }
  }
  string has = flag == 1 ? "동일한문장" : "다른문장";
  cout << has;
  return 0;
}