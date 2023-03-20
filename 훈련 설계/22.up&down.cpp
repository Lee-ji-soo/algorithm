#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  string path[12] = {
      "B5",
      "B4",
      "B3",
      "B2",
      "B1",
      "1",
      "2",
      "3",
      "4",
      "5",
      "6",
  };
  int count = 5;
  char stairs[5][10] = {""};

  for (int i = 0; i < 5; i++)
  {
    cin >> stairs[i];
  }

  for (int i = 0; i < 5; i++)
  {
    if (strcmp(stairs[i], "up") == 0)
    {
      count += 1;
    }
    else
    {
      count -= 1;
    }
  }

  cout << path[count];

  return 0;
}