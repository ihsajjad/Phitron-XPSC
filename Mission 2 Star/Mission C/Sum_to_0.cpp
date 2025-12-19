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
        bool is_odd = n % 2;
        if (is_odd)
        {
            arr.push_back(-1);
            arr.push_back(2);
        }

        if (n > 1)
        {
            for (int i = 0; i < (is_odd ? (n - 2) : n); i++)
                arr.push_back(i % 2 ? 1 : -1);

            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
        }
        else
            cout << -1;

        cout << endl;
    }

    return 0;
}