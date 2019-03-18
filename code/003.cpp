#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	long long num = 600851475143, ans = 0;
	for (long long i = 2; num > 1; ++i)
	{
		if (num%i == 0)
		{
			ans = i;
			num /= i;
		}
	}
	cout << ans;
}