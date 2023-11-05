#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int i = 0;
	for (int c = 0; c <= 20; c++) {
		for (int b = 0; b <= 50; b++) {
			int a = n - 5 * c - 2 * b;
			if (a + 2 * b + 5 * c == n && a >= 0) {
				i++;
				cout << setw(3) << i << setw(12) << a << setw(12) << b << setw(12) << c << endl;
			}
		}
	}
	return 0;
}
