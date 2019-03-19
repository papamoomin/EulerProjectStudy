#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	long long num = 600851475143, ans = 0;
	while (num % 2 == 0)
	{
		num /= 2;
		ans = 2;
	}
	for (long long i = 3; num > 1; i += 2)
	{
		if (num%i == 0)
		{
			ans = i;
			num /= i;
			i -= 2;
		}
	}
	cout << ans;
}