#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string, int> m;
	m["一"] = 1;
	if (m.count("一"))
		cout << "该键有值" << endl;
	else
		cout << "没有" << endl;
	cout << m["一"] << endl;
	return 0;
}
