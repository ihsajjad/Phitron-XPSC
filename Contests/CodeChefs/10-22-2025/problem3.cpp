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

        deque<int> v;
        for (int i = 1; i <= n; i++)
        {
            if (n % i)
                v.push_back(i);
            else
                v.push_front(i);
        }

        for (int itm : v)
            cout << itm << " ";
        cout << '\n';
    }

    return 0;
}