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
/*
4자리로 직접 순열을 만들어 비교하며 하다보니 규칙을 발견.
맨 뒤에서 한자리씩 앞의 수와 비교한다. 만약 높은 자리의 수가 더 낮은 경우, 그 수를 바꿔야 한다.
그 수보다 자리가 낮은 수 중, 그 수보다 큰 수들 가운데 가장 낮은 수와 그 수의 자리를 바꾼다.
그 다음, 바꾼 높은 자리보다 낮은 모든 자리의 수를 제일 높은 자리부터 제일 낮은자리까지 스왑한다.
반복하면 사전식 순열이 나옴
*/