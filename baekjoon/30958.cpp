#include <iostream>
using namespace std;
int cnt[26], N, answer;
string song;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> N;
    cin.ignore();
    getline(cin, song);

    for (char c : song)
    {
        if (c >= 'a' && c <= 'z')
        {
            ++cnt[c - 'a'];
        }
    }

    for (int ret : cnt)
    {
        answer = max(answer, ret);
    }

    cout << answer;
    return 0;
}