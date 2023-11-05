#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp = 1, max_m = -1;
	int arr[10005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[i + 1]) {
			temp++;
		} else {
			max_m = max(temp, max_m);
			temp = 1;
		}
	}
	cout << max_m << endl;
	return 0;
}
