#include <iostream>
#include <array>
#include <map>
using namespace std;

int main()
{
  struct Model
  {
    char name;
    string direct;
  };

  Model models[7] = {};

  for (int i = 0; i < 7; i++)
  {
    cin >> models[i].name >> models[i].direct;
  }

  char position[5][4] = {
      "___",
      "___",
      "ATK",
      "___",
      "___",
  };

  int Ax = 0;
  int Ay = 0;
  int Tx = 0;
  int Ty = 0;
  int Kx = 0;
  int Ky = 0;

  for (int y = 0; y < 5; y++)
  {
    for (int x = 0; x < 3; x++)
    {
      if (position[y][x] == 'A')
      {
        Ay = y;
        Ax = x;
      }

      if (position[y][x] == 'T')
      {
        Ty = y;
        Tx = x;
      }

      if (position[y][x] == 'K')
      {
        Ky = y;
        Kx = x;
      }
    }
  }

  map<string, array<int, 2>> directions;
  directions["UP"] = {-1, 0};
  directions["DOWN"] = {1, 0};
  directions["RIGHT"] = {0, 1};
  directions["LEFT"] = {0, -1};

  for (int i = 0; i < 7; i++)
  {
    if (models[i].name == 'A')
    {
      Ay += directions[models[i].direct][0];
      Ax += directions[models[i].direct][1];
    }
    if (models[i].name == 'T')
    {
      Ty += directions[models[i].direct][0];
      Tx += directions[models[i].direct][1];
    }
    if (models[i].name == 'K')
    {
      Ky += directions[models[i].direct][0];
      Kx += directions[models[i].direct][1];
    }
  }

  char result[5][3] = {0};
  result[Ay][Ax] = 'A';
  result[Ty][Tx] = 'T';
  result[Ky][Kx] = 'K';

  for (int y = 0; y < 5; y++)
  {
    for (int x = 0; x < 3; x++)
    {
      if (result[y][x] == 0)
      {
        cout << '_';
      }
      else
      {
        cout << result[y][x];
      }
    }
    cout << endl;
  }
}