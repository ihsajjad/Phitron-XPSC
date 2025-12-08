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
        vector<char> arr(6);
        for (int i = 0; i < 6; i++)
            cin >> arr[i];

        int cnt = 0;
        bool flag = false;
        for (int i = 0; i < 6; i++)
        {
            if (arr[i] == 'W')
                cnt++;
            else
                cnt = 0;

            if (cnt >= 3)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}