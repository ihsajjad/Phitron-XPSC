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
        int min_p = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int score, price;
            cin >> score >> price;
            if (score >= 7)
                min_p = min(min_p, price);
        }

        cout << (min_p == INT_MAX ? -1 : min_p) << endl;
    }

    return 0;
}