#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int ans = 0;
	for (int i = 2; i < 200000; ++i)
	{
		int sum = 0;
		for (int t = i; t > 0; sum += pow((t % 10), 5), t /= 10);
		if (sum == i)
			ans += i;
	}
	cout << ans;
}