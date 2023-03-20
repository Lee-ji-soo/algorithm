/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{

  char crypto[5][100] = {
      "Jason",
      "Dr.tom",
      "EXEXI",
      "GK12P",
      "POW"};

  char pw[10] = {""};
  cin >> pw;

  int flag = 0;
  for (int i = 0; i < 5; i++)
  {
    if (strcmp(crypto[i], pw) == 0)
    {
      flag = 1;
      break;
    }
  }

  if (flag == 1)
  {
    cout << "암호해제";
  }
  else
  {
    cout << "암호틀림";
  }

  return 0;
}
