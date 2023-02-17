#include <iostream>
#include <cstring>
using namespace std;

int main()
{

  int arr1[4] = {0};
  int arr2[4] = {0};

  for (int i = 0; i < 4; i++)
  {
    cin >> arr1[i];
  }

  for (int i = 0; i < 4; i++)
  {
    cin >> arr2[i];
  }

  int minIndex1 = 0;
  int minIndex2 = 0;
  int result[8] = {0};
  int t = 0;
  while (t < 8)
  {
    if (minIndex1 > 3)
    {
      result[t] = arr2[minIndex2];
      minIndex2 = minIndex2 + 1;
    }
    else if (minIndex2 > 3)
    {
      result[t] = arr1[minIndex1];
      minIndex1 = minIndex1 + 1;
    }
    else if (arr1[minIndex1] < arr2[minIndex2])
    {
      result[t] = arr1[minIndex1];
      minIndex1 = minIndex1 + 1;
    }
    else if (arr1[minIndex1] > arr2[minIndex2])
    {
      result[t] = arr2[minIndex2];
      minIndex2 = minIndex2 + 1;
    }
    else if (arr1[minIndex1] == arr2[minIndex2])
    {
      result[t] = arr1[minIndex1];
      minIndex1 = minIndex1 + 1;
    }
    t++;
  }

  for (int i = 0; i < 8; i++)
  {
    cout << result[i] << " ";
  }

  return 0;
}