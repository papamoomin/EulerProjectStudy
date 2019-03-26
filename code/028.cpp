#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int ans = 1, num = 1;
	for (int i = 2; i < 1001; i += 2)
		for (int j = 0; j < 4; ++j)
		{
			num += i;
			ans += num;
		}
	cout << ans;
}