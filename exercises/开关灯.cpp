#include <bits/stdc++.h>
using namespace std;
int arr[100];
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 2; i <= m; i++) {
		for (int j = i; j <= n; j = j + i) {
			arr[j] = !arr[j];
		}
	}
	cout << 1;
	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0)
			cout << "," << i;
	}
	return 0;
}
