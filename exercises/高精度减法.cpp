#include <bits/stdc++.h>
using namespace std;
int arr[205];
int arr2[205];
int jian[205];
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int len = max(s1.length(), s2.length());
	for (int i = 1; i <= s1.length(); i++) {
		arr[i] = s1[s1.length() - i] - '0';
	}
	for (int i = 1; i <= s2.length(); i++) {
		arr2[i] = s2[s2.length() - i] - '0';
	}
	int i = 1;
	while (i <= len) {
		if (arr[i] - arr2[i] < 0) {
			jian[i] = (arr[i] + 10) - arr2[i];
			arr[i + 1] -= 1;
		} else
			jian[i] = arr[i] - arr2[i];
		i++;
	}
	int flag = 0;
	for (int i = len; i > 0; i--) {
		if (jian[i] != 0)
			flag = 1;
		if (flag == 1)
			cout << jian[i];
	}
	return 0;
}
