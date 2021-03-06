#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int num[15][15] = {
	{ 75, 0, },
	{ 95, 64, 0, },
	{ 17, 47, 82, 0, },
	{ 18, 35 ,87 ,10, 0, },
	{ 20, 04 ,82 ,47, 65, 0, },
	{ 19, 01 ,23 ,75, 03, 34, 0, },
	{ 88, 02 ,77 ,73, 07, 63, 67, 0, },
	{ 99, 65 ,04 ,28, 06, 16, 70, 92, 0, },
	{ 41 ,41 ,26 ,56, 83, 40, 80, 70, 33, 0, },
	{ 41, 48 ,72 ,33, 47, 32, 37, 16, 94, 29, 0, },
	{ 53, 71 ,44 ,65, 25, 43, 91, 52, 97, 51, 14, 0, },
	{ 70, 11 ,33 ,28, 77, 73, 17, 78, 39, 68, 17, 57, 0, },
	{ 91, 71 ,52 ,38, 17, 14, 91, 43, 58, 50, 27, 29, 48, 0, },
	{ 63, 66 ,4 ,68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31, 0 },
	{ 4, 62, 98 ,27, 23, 9 ,70 ,98 ,73 ,93 ,38 ,53 ,60 ,04 ,23 } };
	int ans = 0;

	for (int i = 1; i < 15; ++i)
		for (int j = 0; j <= i; ++j)
			if (j == 0)
				num[i][j] += num[i - 1][j];
			else if (j == i)
				num[i][j] += num[i - 1][j - 1];
			else if (num[i - 1][j - 1] > num[i - 1][j])
				num[i][j] += num[i - 1][j - 1];
			else
				num[i][j] += num[i - 1][j];
	for (int i = 0; i < 15; ++i)
		ans = (num[14][i] > ans) ? num[14][i] : ans;
	cout << ans;
}