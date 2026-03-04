#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            if (arr[i - 1] > arr[i])
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}