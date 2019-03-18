#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int ans = 0;
	for (int i = 2; ++i < 1000; )
		if (i % 3 == 0 || i % 5 == 0)
			ans += i;
	cout << ans;
}