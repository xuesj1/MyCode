#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*int n, l, r, t, t2 = 0;
	int arr[100] = {0};
	cin >> n >> l >> r;
	for (int i = l; i <= r; i++) {
		t = i;
		while (t >= n) {
			t -= n;
		}
		arr[t2] = t;
		t2++;
	}
	sort(arr, arr + t2);
	cout << arr[t2 - 1] << endl;*/
	int n, l, r;
	cin >> n >> l >> r;
	if (r - l + 1 >= n)
	{
		cout << n - 1 << endl;
		return 0;
	}
	if (l % n <= r % n)
	{
		cout << r % n << endl;
		return 0;
	}
	else
		cout << n - 1 << endl;
	return 0;
}
