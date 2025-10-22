#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
        string s;
        cin >> s;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                v.push_back(i);
        }
        cout << v.size() << "\n";
        for (auto &&x : v)
        {
            cout << x + 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}