#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	int year = 1901, day = 2, count = 0;
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (; year < 2001; ++year)
		for (int i = 1; i < 13; ++i)
		{
			if (day == 0)
				++count;
			if (i == 2)
				if (year % 4 == 0)
				{
					bool isYoonNyun = true;
					if (year % 100 == 0)
						if (year % 400 != 0)
							isYoonNyun = false;
					if (isYoonNyun)
						++day;
				}
			day = (day + month[i]) % 7;
		}
	cout << count;
}