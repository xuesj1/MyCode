#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0, max_m = 0;
	int arr[10005], sum[10005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		sum[arr[i]]++;
		max_m = max(max_m, arr[i]);
	}
	for (int i = 0; i <= max_m; i++) {
		cout << sum[i] << endl;
	}
	return 0;
}
