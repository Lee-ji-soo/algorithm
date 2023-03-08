#include <iostream>
#include <array>
using namespace std;

char arr[3][4] = {""};

void unShift(char c, int arrIndex)
{
  int len = 0;
  for (int i = 0; i < 4; i++)
  {
    if (arr[arrIndex][i] == '\0')
    {
      len = i;
      break;
    }
  }

  for (int i = len; i >= 0; i--)
  {
    arr[arrIndex][i + 1] = arr[arrIndex][i];
  }
  arr[arrIndex][0] = c;
}

void push(char c, int arrIndex)
{
  int len = 0;
  for (int i = 0; i < 4; i++)
  {
    if (arr[arrIndex][i] == '\0')
    {
      len = i;
      break;
    }
  }

  arr[arrIndex][len] = c;
}

int main()
{
  char input[4][3] = {""};
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> input[i][j];
    }
  }

  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 4; y++)
    {
      if (input[y][x] == '_')
      {
        push('_', x);
      }
      else
      {
        unShift(input[y][x], x);
      }
    }
  }

  for (int x = 3; x >= 0; x--)
  {
    for (int y = 0; y < 3; y++)
    {
      cout << arr[y][x];
    }
    cout << endl;
  }

  return 0;
}