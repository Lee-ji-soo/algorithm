#include <iostream>
using namespace std;

int main() {
	string a;
	cin >> a;
	string b;
	cin >> b;
	string c;
	cin >> c;

	string arr[3] = { a, b, c };

	char strings[3] = { "" };

	for (int i = 0; i < 3; i++) {
		for (int a = 0; a < 11; a++) {
			if (arr[i][a] == '\0') {
				strings[i] = arr[i][a - 1];
				break;
			}
		}
	}


	for (int i = 0; i < 3; i++) {
		cout << strings[i];
	}
	return 0;
}