#include <bits/stdc++.h>
using namespace std;
const int maxN = (1LL << 15);

vector<int> allPalindrome;
bool isPalindrome(int x)
{
    string s = to_string(x), t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
        if (isPalindrome(i))
            allPalindrome.push_back(i);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    markPalindrome();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n), cnt(maxN + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cnt[arr[i]]++;
        }

        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allPalindrome.size(); j++)
            {
                int curr = (arr[i] ^ allPalindrome[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans/2) << endl;
    }

    return 0;
}