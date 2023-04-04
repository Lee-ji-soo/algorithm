#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int arr[8] = {0};

  for (int i = 0; i < 8; i++)
  {
    cin >> arr[i];
  }

  int lIndex = 1;
  int rIndex = 7;
  int pivot = arr[0];

  while (rIndex >= lIndex)
  {
    while (lIndex < 8 && arr[lIndex] <= pivot)
    {
      lIndex++;
    }

    while (rIndex > 0 && arr[rIndex] >= pivot)
    {
      rIndex--;
    }

    if (rIndex <= lIndex)
    {
      int temp = arr[rIndex];
      arr[rIndex] = pivot;
      arr[0] = temp;
    }
    else
    {
      int temp = arr[lIndex];
      arr[lIndex] = arr[rIndex];
      arr[rIndex] = temp;
    }
  }

  for (int i = 0; i < 8; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}

// 피봇 설명:  https://sooleeandtomas.tistory.com/110