#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> pos_arr, neg_arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pos_arr.insert(val);
        neg_arr.insert(-val);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;
        auto a = neg_arr.upper_bound(-val), b = pos_arr.upper_bound(val);
        if (a != neg_arr.end())
            cout << -*a << " ";
        else
            cout << "X" << " ";

        if (b != pos_arr.end())
            cout << *b << '\n';
        else
            cout << "X" << '\n';
    }

    return 0;
}