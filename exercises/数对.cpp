#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[105];
	int n = 0, s = 0;
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		arr[n] = 1;
	}
	for (int i = 1; i < 51; i++) {
		if (arr[i] == 1 && arr[i * 2] == 1) {
			s++;
		}
	}
	cout << s << endl;
	return 0;
}
