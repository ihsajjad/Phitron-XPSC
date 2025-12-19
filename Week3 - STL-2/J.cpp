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

        for (int i = 1; i <= n; i++)
        {
            pq.push(i);
        }

        vector<pair<int, int>> v;
        while (!pq.empty())
        {
            if (pq.size() < 2)
                break;
            double a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            double div = (a + b) / 2;
            pq.push(ceil(div));
            v.push_back({a, b});
        }

        cout << pq.top() << '\n';
        for (auto item : v)
            cout << item.first << " " << item.second << '\n';
    }

    return 0;
}