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
        vector<int> nums(5);
        int total = 0;
        for (int i = 0; i <= 4; i++)
        {
            cin >> nums[i];
            total += nums[i];
        }

        sort(nums.begin(), nums.end());

        float rem = 35 - total;
        if (rem > 0)
        {
            int x = ceil(rem / 10);
            for (int i = 0; i < x; i++)
                total -= nums[i];

            total += (x * 10);
            if (total >= 35)
                cout << (x * 100) << endl;
            else
                cout << ((x + 1) * 100) << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}