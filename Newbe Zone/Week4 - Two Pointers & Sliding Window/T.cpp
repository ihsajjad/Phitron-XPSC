#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    map<int, int> fre;
    int cnt = 0;
    long long int ans = 0;
    vector<int> arr(n);
    for (int i = 1, j = 1; j <= n; j++)
    {
        cin >> arr[j];
        fre[arr[j]]++;
        if (fre[arr[j]] == 1)
            cnt++;

        while (cnt > k)
        {
            fre[arr[i]]--;
            if (fre[arr[i]] == 0)
                cnt--;
            i++;
        }
        ans += (j - i + 1);
    }
    cout << ans << '\n';

    return 0;
}