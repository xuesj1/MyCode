#include <bits/stdc++.h>
using namespace std;
int zs(int a)
{
	int flag = 0;
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			flag = 1;
		}
	}
	if (flag == 0)
		return a;
	else
		return 1000000;
}
int main()
{
	int n;
	cin >> n;
	int flag = 1000000;
	for (int i = n - 1; i >= 2; i--)
	{
		flag = zs(i);
		if (flag != 1000000)
		{
			cout << flag;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
