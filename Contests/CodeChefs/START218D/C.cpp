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
        int chef_vote = 0, anti_chef = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == '0')
                anti_chef++;
            else
                chef_vote++;

            if (chef_vote > anti_chef)
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}