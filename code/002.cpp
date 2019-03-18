#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int a = 1, b = 2, ans = b;
	for (int c = a + b; c <= 4000000; c = a + b)
	{
		if (c % 2 == 0)
			ans += c;
		a = b;
		b = c;
	}
	cout << ans;
}