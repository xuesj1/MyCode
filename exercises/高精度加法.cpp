#include <bits/stdc++.h>
using namespace std;
int arr1[1000], arr2[1000], sum[1000];
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	long long len1 = s1.length();
	long long len2 = s2.length();
	for (int a = 1; a <= len1; a++)
	{
		arr1[a] = s1[len1 - a] - '0';
	}
	for (int a = 1; a <= len2; a++)
	{
		arr2[a] = s2[len2 - a] - '0';
	}
	int xb = 1;
	int jin = 0;
	while (xb <= len1 || xb <= len2)
	{
		sum[xb] = arr1[xb] + arr2[xb] + jin;
		jin = sum[xb] / 10;
		sum[xb] %= 10;
		xb++;
	}
	sum[xb] = jin;
	while (xb > 1 && sum[xb] == 0)
	{
		xb--;
	}
	for (int a = xb; a >= 1; a--)
	{
		cout << sum[a];
	}
	return 0;
}