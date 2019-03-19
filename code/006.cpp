#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int binomialsSum = 0, sumsBinomial = 0, max = 100;
	for (int i = 1; i <= max; ++i)
	{
		binomialsSum += (i*i);
		sumsBinomial += i;
	}
	cout << sumsBinomial * sumsBinomial - binomialsSum;
}