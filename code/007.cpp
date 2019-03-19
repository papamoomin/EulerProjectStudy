#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int count = 1, ans = 0;
	for (int i = 3; count < 10001; i += 2)
	{
		bool isPrime = true;
		for (int j = 3; j*j <= i; j += 2)
		{
			if (i%j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			++count;
			ans = i;
		}
	}
	cout << ans;
}