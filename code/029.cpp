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
a를 소인수분해한 다음 그 인수의 갯수에 b만큼 곱해줌.
그 다음 각 인수가 몇 개인지 문자열로 저장한 후 우선순위 큐에 넣음.
꺼내면서 순서대로 나오면 그를 검사.
*/