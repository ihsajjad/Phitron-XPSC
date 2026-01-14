#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n), ans;
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i != 0)
            {
                if ((arr[i] > 0 && arr[i - 1] < 0) || (arr[i] < 0 && arr[i - 1] > 0))
                    cnt++;
                else
                {
                    ans.push_back(cnt);
                    cnt--;
                    if (cnt <= 0)
                        cnt = 1;
                }
            }
        }

        ans.push_back(cnt);
        int last_len = ans.back();
        int run = n - ans.size();
        for (int i = 0; i < run; i++)
        {
            last_len--;
            ans.push_back(last_len ? last_len : 1);
        }

        for (int val : ans)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}