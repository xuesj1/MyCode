#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*int a, b;
	cin >> a >> b;
	if (pow(a, b) > 1000000000)
		cout << -1 << endl;
	else
		cout << pow(a, b) << endl;*/
	long long a, b, ans = 1;
	cin >> a >> b;
	if (a == 1)
	{
		cout << 1 << endl;
		return 0;
	}
	for (int x = 1; x <= b; x++)
	{
		ans *= a;
		if (ans > pow(10, 9))
		{
			cout << -1 << endl;
			return 0;
		}
	}
	cout << ans << endl;
	return 0;
}
