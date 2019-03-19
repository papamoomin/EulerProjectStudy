#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	long long int ans = 2;
	for (int i = 3; i < 2000001; i += 2)
	{
		bool isPrime = 1;
		for (int j = 3; j*j <= i; j += 2)
		{
			if (i%j == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime)
			ans += i;
	}
	cout << ans;
}