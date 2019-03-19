#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int cipherNum[6], ans = 0, big = 0, small = 0;
	bool isNotFind = true;
	for (int i = 999; i > 99 && isNotFind; --i)
	{
		for (int j = 999; j > 99; --j)
		{
			int temp = i * j, cipher = 5;
			if (temp < ans)
				break;
			for (int k = 0, t = temp; t > 0; ++k)
			{
				cipherNum[k] = t % 10;
				t /= 10;
			}
			if (temp < 100000)
			{
				cipher = 4;
			}
			bool isPelindrome = 1;
			for (int k = 0; cipher > k; --cipher, ++k)
			{
				if (cipherNum[cipher] != cipherNum[k])
				{
					isPelindrome = 0;
					break;
				}
			}
			if (isPelindrome)
			{
				if (temp > ans)
				{
					ans = temp;
					break;
				}
			}
		}
	}
	cout << ans;
}