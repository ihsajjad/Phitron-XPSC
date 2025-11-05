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
        deque<int> dq;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (sum == val)
            {
                dq.push_front(val);
            }
            else
                dq.push_back(val);

            sum += val;
        }

        for (int val : dq)
            cout << val << " ";
        cout << '\n';
    }

    return 0;
}