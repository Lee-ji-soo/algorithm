#include <iostream>
using namespace std;

int arr[2][4] = {
	1, 5, 4, 2,
	6, 6, 5, 1
};

int getSum(int a, int b, int c, int d) {
	return a + b + c + d;
}

int getMultiply(int a, int b) {
	return a * b;
}

int getMax(int a, int b) {
	if (a > b){
		return a;
	}
	return b;
}

int main() {
	int d1 = getSum(arr[0][0], arr[0][1], arr[0][2], arr[0][3]);
	int d2 = getSum(arr[1][0], arr[1][1], arr[1][2], arr[1][3]);
	int boss1 = getMax(d1, d2);

	int boss2 = -9999;
	for (int i = 0; i < 4; i++) {
		int temp = getMultiply(arr[0][i], arr[1][i]);
		if (boss2 < temp) {
			boss2 = temp;
		}
	}

	int result = getMax(boss1, boss2);
	return result;
};