#include <bits/stdc++.h>
using namespace std;
int arr[100005], sum[1000005];
int main()
{
	int n = 0;
	int i = 0;
	cin >> n;
	if (n % 2 != 0)
		cout << "-1" << endl;
	else
	{
		while (1)
		{
			// arr.push_back(n % 2);
			arr[i] = n % 2;
			n /= 2;
			if (n <= 0)
				break;
			i++;
		}
	}
	int j = 0;
	for (int a = i; a >= 1; a--)
	{
		if (arr[a] == 1)
		{
			// sum.push_back(func(a));
			sum[j] = pow(2, a);
		}
		j++;
	}
	for (int i = 0; i < j; i++)
	{
		if (sum[i] == 0)
			continue;
		else
			cout << sum[i] << " ";
	}
	return 0;
}
