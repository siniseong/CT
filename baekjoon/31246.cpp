#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> bids(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> bids[i].first >> bids[i].second;
    }

    // X를 증가시키며 K개 이상의 지면을 낙찰받을 수 있는지 확인
    int left = 0, right = 1e9, mid;
    while (left < right)
    {
        mid = left + (right - left) / 2;

        int count = 0;
        for (auto &bid : bids)
        {
            if (bid.first + mid >= bid.second)
            {
                count++;
            }
        }

        if (count >= K)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << left << endl;

    return 0;
}
