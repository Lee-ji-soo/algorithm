#include <iostream>

using namespace std;


bool isExist(char input, char a){
    if(input == a){
        return true;
    }    
    return false;
}

int main() {
    char a, b;
    cin >> a >> b;
    
    char cr[2][6] = {
        'A', '7', '9', 'T', 'K', 'Q',
        'M', 'I', 'N', 'C', 'O', 'D'
    };
    
    bool A = 0;
    bool B = 0;
    
    for (int i = 0; i<2; i++){
        for (int j = 0; j<6; j++){
            A = isExist(a, cr[i][j]) ? A + 1 : A;
            B = isExist(b, cr[i][j]) ? B + 1 : B;
        }
    }
    
    string has = "존재";
    string no = "없음";
    string AA = (A > 0) ? has : no;
    string BB = (B > 0) ? has : no;
    
    cout << a << " : " << AA << endl;
    cout << b << " : " << BB;
    return 0;
}