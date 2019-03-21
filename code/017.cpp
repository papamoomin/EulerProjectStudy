#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int oneToTwenty[20] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };
	int twentyToHundred[10] = { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 };
	int hundred = 7, and = 3, thousand = 8, ans = 0;
	for (int i = 1; i <= 1000; ++i)
		if (i < 20)
			ans += oneToTwenty[i];
		else if (i < 100)
			ans += (twentyToHundred[i / 10] + oneToTwenty[i % 10]);
		else if (i < 1000)
		{
			ans += (oneToTwenty[i / 100] + hundred);
			if (i % 100 != 0)
				ans += and;
			if (i % 100 < 20)
				ans += oneToTwenty[i % 100];
			else
				ans += twentyToHundred[(i % 100) / 10] + oneToTwenty[i % 10];
		}
		else
			ans += oneToTwenty[i / 1000] + thousand;
	cout << ans;
}