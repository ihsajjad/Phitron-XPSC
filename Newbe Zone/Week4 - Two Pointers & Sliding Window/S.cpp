#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> last_idx;
    int ans = 0;
    for (int i = 1, j = 1; j <= n; j++)
    {
        int val;
        cin >> val;
        i = max(i, last_idx[val] + 1);
        last_idx[val] = j;
        ans = max(ans, j - i + 1);
    }
    cout << ans << '\n';

    return 0;
}