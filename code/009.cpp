#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int ans = 0;
	for (int i = 3; i < 500 && ans == 0; ++i)
	{
		for (int j = 2; j < i && ans == 0; ++j)
		{
			for (int k = 1; k < j; ++k)
			{
				if (i*i == j * j + k * k)
				{
					if (i + j + k == 1000)
					{
						ans = i * j * k;
						break;
					}
				}
			}
		}
	}
	cout << ans;
}