#include<iostream>
using namespace std;
void swap(int &a, int &b) { int t = a; a = b; b = t; }
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int num[10] = { 0,1,2,3,4,5,6,7,8,9 }, count = 1;
	while (count++ < 1000000)
	{
		for (int i = 8; i > -1; --i)
			if (num[i] < num[i + 1])
			{
				int selectJ = -1;
				for (int j = i + 1, min = num[i + 1]; j < 10; ++j)
					if (num[j] <= min && num[j] >= num[i])
						selectJ = j;
				swap(num[i], num[selectJ]);
				for (int j = i + 1, k = 9; j < k; ++j, --k)
					swap(num[j], num[k]);
				break;
			}
	}
	for (int i = 0; i < 10; ++i)
		cout << num[i];
}