#include<iostream>
#include<string>
using namespace std;

int isSame(int pass[4], int input[4]){
  int result = 0;
  for (int i =0; i<4; i++){
    if(pass[i] == input[i]){
      result = 1;
    }else{
      result = 0;
      break;
    }
  }
  return result;
}
int main() {
    int pass[4] = {3, 7, 4, 9};
    int input[4] = {0};
    for(int i=0;i<4;i++){
        cin >> input[i];
    }
  

    string same = "fail";
    if(isSame(pass, input) == 1){
      same ="pass";
    }
    cout << same;
    return 0;
}