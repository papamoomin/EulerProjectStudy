#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int ans = 0, naturalNum = 1;
	bool isFinding = 1;
	for (; isFinding; ++naturalNum)
	{
		ans += naturalNum;
		for (int i = 1, count = 0; i*i <= ans; ++i)
		{
			if (ans%i == 0)
				++count;
			if (count == 250)
			{
				isFinding = false;
				break;
			}
		}
	}
	cout << ans;
}