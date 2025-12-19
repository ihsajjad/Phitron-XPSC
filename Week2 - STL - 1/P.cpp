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
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (!dq.empty() && dq.front() < val)
                dq.push_back(val);
            else
                dq.push_front(val);
        }

        for (int item : dq)
            cout << item << " ";

        cout << '\n';
    }

    return 0;
}