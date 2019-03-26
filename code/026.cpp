#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int nine[1000]{ 0, };
	int ans = 0, maxLen = 0;
	for (int num = 2; num < 1001; ++num)
	{
		int temp = num;
		while (temp % 2 == 0)
			temp /= 2;
		while (temp % 5 == 0)
			temp /= 5;
		if (temp == 1)
			continue;

		for (int i = 0; i < 1000; ++i)
		{
			for (int j = 0; j <= i; ++j)
				nine[j] = 9;
			int nineNum = 0;
			for (int j = 0; nine[j] == 9; ++j)
			{
				nineNum = nineNum * 10 + 9;
				nineNum %= temp;
			}
			if (nineNum == 0)
			{
				if (maxLen < i + 1)
				{
					maxLen = i + 1;
					ans = num;
				}
				break;
			}
		}
		for (int i = 0; i < 1000; ++i)
			nine[i] = 0;
	}
	cout << ans;
}
/*
b/a�� ���ѼҼ��� ��
a�� ���μ������Ͽ� 2^n * 5^k * a �� �����µ�,
(10^l - 1)/a�� �ڿ����� �Ǵ� l�� �ּҰ��� ��ȯ������ �����̴�.
*/