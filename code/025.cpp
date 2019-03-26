#include<iostream>
using namespace std;
void Sum(int *a, int *b)
{
	for (int j = 0; j < 1000; ++j)
	{
		a[j] += b[j];
		if (a[j] > 9)
		{
			a[j + 1] += (a[j] / 10);
			a[j] %= 10;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int num1[1000]{ 1, 0, }, num2[1000]{ 1, 0, }, count = 3;
	for (int i = 1; 1; ++count)
		if (i++ % 2 == 1)
		{
			Sum(num1, num2);
			if (num1[999] > 0)
				break;
		}
		else
		{
			Sum(num2, num1);
			if (num2[999] > 0)
				break;
		}
	cout << count << endl;
}