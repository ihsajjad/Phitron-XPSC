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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (val == 1)
                arr.push_back(val);
            else if (!arr.empty() && ((arr.back() + 1)) == val)
            {
                arr.push_back(val);
            }
        }
        cout << arr.size() << endl;
    }

    return 0;
}