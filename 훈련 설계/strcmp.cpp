#include <iostream>
#include <cstring>
using namespace std;

//strlen // length 문자열 length 반환.
//strcmp // compare 문자열 0이면 같다. 1이면 다르다.

int main() {
    char arr[] = "ABC";
    char arr2[]  = "ABCD";

    if(!strcmp(arr, arr2)) cout << 'O';
    else cout << "X";

    return 0;
}