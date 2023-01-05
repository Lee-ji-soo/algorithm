#include <iostream>
using namespace std;

int main() {
	int da[5] = { 1, 15, 7, 9, -7 };
	int db[5] = { 0 };

	db[0] = da[0];

	for (int i = 1; i <= 4; i++) {
		db[i] = da[i] + db[i - 1];
	};

	for (int i = 0; i < 5; i++) {
		cout << db[i] << endl;
	};
};