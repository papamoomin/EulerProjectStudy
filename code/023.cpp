#include<iostream>
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int ans = 0;
	vector<int> abundantNum;
	bool isNotAbSum[28124] = { 1 };
	for (int i = 1; i < 28124; ++i)
	{
		isNotAbSum[i] = 1;
		int temp = 0;
		for (int j = i / 2; j > 0; --j)
			if (i%j == 0)
				temp += j;
		if (temp > i)
			abundantNum.push_back(i);
	}
	for (int i = 0, len = abundantNum.size(); i < len; ++i)
	{
		for (int j = i; j < len; ++j)
		{
			int temp = abundantNum[i] + abundantNum[j];
			if (temp > 28123)
				break;
			isNotAbSum[temp] = 0;
		}
	}
	for (int i = 0; i < 28124; ++i)
		if (isNotAbSum[i])
			ans += i;
	cout << ans;
}