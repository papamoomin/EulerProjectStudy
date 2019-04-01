#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	priority_queue<string> pq;
	int count = 0;
	for (int i = 2; i < 101; ++i)
		for (int j = 2; j < 101; ++j)
		{
			int soinsoo[100]{ 0, };
			int temp = i;
			for (int k = 2; temp > 1; )
			{
				if (temp%k == 0)
				{
					temp /= k;
					++soinsoo[k];
					continue;
				}
				++k;
			}
			string s = "";
			for (int k = 0; k < 100; ++k)
				if (soinsoo[k] > 0)
				{
					string t = to_string(k);
					s += (t + ':');
					t = to_string(soinsoo[k] * j);
					s += t + ' ';
				}
			pq.push(s);
		}
	string s = "";
	while (!pq.empty())
	{
		if (pq.top() != s)
		{
			s = pq.top();
			++count;
		}
		pq.pop();
	}
	std::cout << count;
}
/*
a�� ���μ������� ���� �� �μ��� ������ b��ŭ ������.
�� ���� �� �μ��� �� ������ ���ڿ��� ������ �� �켱���� ť�� ����.
�����鼭 ������� ������ �׸� �˻�.
*/