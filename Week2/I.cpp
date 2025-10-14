#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<string> dq;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        auto it = find(dq.begin(), dq.end(), s);
        dq.push_front(s);

        if (it != dq.end())
            dq.erase(it);
    }

    for (auto item : dq)
        cout << item << '\n';

    return 0;
}