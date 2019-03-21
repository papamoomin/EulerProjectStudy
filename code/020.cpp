#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int num[158], maxCipher = 158, ans = 0, max = 100;
	for (int i = 1; i < maxCipher; ++i)
		num[i] = 0;
	num[0] = 1;
	for (int i = 2; i <= max; ++i)
	{
		for (int j = 0; j < maxCipher; ++j)
			num[j] *= i;
		for (int j = 0; j < maxCipher; ++j)
			if (num[j] > 9)
			{
				num[j + 1] += (num[j] / 10);
				num[j] %= 10;
			}
	}
	for (int i = 0; i < maxCipher; ++i)
		ans += num[i];
	cout << ans;
}