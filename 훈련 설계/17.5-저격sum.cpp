#include<iostream>
#include<string>
using namespace std;

int getSum(int arr[11], int startIndex){
    int temp = 0;
    for(int i = startIndex; i < startIndex + 5 ; i++){
        temp += arr[i];
    }
    return temp;
}
int main() {
    int arr[11] = { 3, 4, 1, 1, 2, 6, 8, 7, 8, 9, 10};
    int startIndex;
    cin >> startIndex;
    int result = 0;
    result = getSum(arr, startIndex);
    cout << result;
    return 0;
}