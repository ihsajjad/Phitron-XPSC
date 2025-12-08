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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            mp[c]++;
        }

        bool is_palindrome = false;
        int ans = 0;

        for (auto child : mp)
        {
            if (child.second >= 2)
                if (is_palindrome)
                    ans += child.second;
                else
                {
                    is_palindrome = true;
                    ans += child.second - 2;
                }
            else
                ans += child.second;
        }

        cout << (is_palindrome ? ans : -1) << '\n';
    }

    return 0;
}