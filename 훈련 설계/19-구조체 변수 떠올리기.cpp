#include <iostream>

using namespace std;

int main() {
    struct Data {
        int x, y, z;
    };
    
    Data arr[2];
    
    for(int y=0;y<2;y++){
        cin >> arr[y].x >> arr[y].y >> arr[y].z;
    }
    
    cout << arr[0].x + arr[1].x <<endl;
    cout << arr[0].y + arr[1].y <<endl;
    cout << arr[0].z + arr[1].z <<endl;
    return 0;
}