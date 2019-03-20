#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int num[302]{ 0, }, up = 0, ans = 0;
	num[0] = 1;
	for (int i = 0; i < 1000; ++i, up = 0)
		for (int j = 0; j < 302; ++j)
		{
			num[j] *= 2;
			if (up > 0)
			{
				++num[j];
				up = 0;
			}
			if (num[j] > 9)
			{
				num[j] %= 10;
				up = 1;
			}
		}
	for (int i = 0; i < 302; ++i)
		ans += num[i];
	cout << ans;
}