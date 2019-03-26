#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int a, b, maxCount = -1, ans = 0;
	for (a = -999; a < 1000; ++a)
		for (b = -999; b < 1000; ++b)
		{
			int nowCount = -1;
			for (int i = 0; i < 10000; ++i)
			{
				int temp = i * i + a * i + b;
				if (temp < 2)
					break;
				else if (temp == 2)
					continue;
				else if (temp % 2 == 0)
					break;
				bool isPrime = 1;
				for (int j = 3; j*j <= temp; j += 2)
					if (temp%j == 0)
					{
						isPrime = 0;
						break;
					}
				if (!isPrime)
					break;
				else
					nowCount = i;
			}
			if (nowCount > maxCount)
			{
				maxCount = nowCount;
				ans = a * b;
			}
		}
	cout << ans;
}