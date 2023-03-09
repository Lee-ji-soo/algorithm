#include <iostream>
#include <array>
using namespace std;

int main()
{
  int arr[8] = {0};
  for (int i = 0; i < 8; i++)
  {
    cin >> arr[i];
  }

  int dat[10] = {0};

  for (int i = 0; i < 8; i++)
  {
    dat[arr[i]]++;
  }

  for (int i = 0; i < 10; i++)
  {
    if (dat[i] > 0)
    {
      for (int j = 0; j < dat[i]; j++)
      {
        cout << i << ' ';
      }
    }
  }

  return 0;
}