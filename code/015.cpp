#include<iostream>
using namespace std;
long long int route(int length);
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cout << route(20);
}
long long int route(int length)
{
	int *denominator = new int[length + 1];
	long long int temp = 1;
	for (int i = 1; i <= length; ++i)
		denominator[i] = 2;
	for (int i = 2; i <= length * 2; ++i)
	{
		temp *= i;
		for (int j = length; j > 1; --j)
			if (denominator[j] > 0)
				if (temp % j == 0)
				{
					temp /= j;
					--denominator[j++];
				}
	}
	return temp;
}