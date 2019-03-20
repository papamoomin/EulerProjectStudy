#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int ansNum = 1, maxCount = 0;
	for (int i = 2, count = 0; i < 1000000; ++i, count = 0)
	{
		long long int temp = i;
		while (1)
			if (temp == 1)
			{
				if (count > maxCount)
				{
					ansNum = i;
					maxCount = count;
				}
				break;
			}
			else
			{
				++count;
				temp = (temp % 2 == 0) ? temp / 2 : (3 * temp) + 1;
			}
	}
	cout << ansNum << endl;
}