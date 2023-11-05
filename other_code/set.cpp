#include <bits/stdc++.h>
using namespace std;

int main() {
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(3);
	set<int> ::iterator it;
	it = s.find(2);
	if (it != s.end())
		cout << *it << endl;
	else
		cout << "没有" << endl;
	cout << "size" << s.size() << endl;
	cout << "max_size" << s.max_size() << endl;
	cout << "begin" << *s.begin() << endl;
	cout << "地址长度" << *s.end() << endl;
	return 0;
}
