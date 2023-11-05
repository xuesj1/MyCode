#include <bits/stdc++.h>
using namespace std;
void jh(int *a, int*b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main() {
	int a, b;
	cin >> a >> b;
	jh(&a, &b);
	cout << a << " " << b << endl;
	return 0;
}
