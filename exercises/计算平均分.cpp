#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	for (int j = 0; j < 3; j++) {
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			sum += arr[i][j];
		}
		cout << sum / 3 << endl;
	}
	return 0;
}
