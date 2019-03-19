#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int ans = 1, max = 20;
	for (int i = 2; i < max + 1; ++i)
	{
		if (ans%i != 0)
		{
			int temp;
			for (temp = i; temp < max + 1; temp *= i);
			temp /= i;
			ans *= temp;
		}
	}
	cout << ans;
}