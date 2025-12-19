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
        priority_queue<int> pq;
        long long int army = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (!val && !pq.empty())
            {
                army += pq.top();
                pq.pop();
            }
            else
                pq.push(val);
        }

        cout << army << '\n';
    }

    return 0;
}