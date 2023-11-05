#include <bits/stdc++.h>
using namespace std;

int main() {
	char c[9];
	int n = 0;
	for (int i = 0; i < 8; i++)
		cin >> c[i];
	for (int i = 0; i < 8; i++) {
		if (c[i] == '1')
			n++;
	}
	cout << n << endl;
	return 0;
}
