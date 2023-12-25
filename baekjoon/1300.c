#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long long N, K;
long long Low, High, Mid;
long long cnt;

long long count(long long x)
{
	long long sum = 0;
	for (int i = 1; i <= N; i++)
	{
		sum += min(x / i, N);
	}
	return sum;
}

int main()
{
	cin >> N >> K;

	K = min((long long)1000000000, K);

	Low = 1;
	High = N * N;

	while (Low <= High)
	{
		Mid = (Low + High) / 2;

		cnt = count(Mid); 
		if (cnt >= K)
		{
		
			High = Mid - 1;
		}
		else
		{

			Low = Mid + 1;
		}
	}
	cout << Low;
}