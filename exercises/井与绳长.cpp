#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n1, n2, n3, n4, n5;
	cin >> k >> n1 >> n2 >> n3 >> n4 >> n5;
	int flag = 0;
	for (int len = 1; len <= k * 100; len++) {//枚举井深
		int b, c, d, e;//四家的绳长
		for (int a = 1; a <= len; a++) {//枚举a的长
			b = len - a * n1;
			c = len - b * n2;
			d = len - c * n3;
			e = len - d * n4;
			if (a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e) {//绳长各不相等
				if (e * n5 + a == len) {//判断a是否符合条件
					cout << len << " " << a << " " << b << " " << c << " " << d << " " << e;//输出
					flag = 1;//标记
					break;
				}
			}
		}
	}
	if (flag == 0) {//没有一组可行解
		cout << "not found" << endl;
	}
	return 0;
}
