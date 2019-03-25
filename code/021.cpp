#include<iostream>
using namespace std;
int yacksoo(int i)
{
	int temp = 0;
	for (int j = i / 2; j > 0; --j)
		if (i%j == 0)
			temp += j;
	return temp;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int ans = 0;
	for (int i = 2; i < 10001; ++i)
	{
		int temp = yacksoo(i);
		if (i == temp)
			continue;
		if (i == yacksoo(temp))
			ans += i;
	}
	cout << ans;
}