#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    set<int> st{0, x};
    multiset<int> ml{x};

    while (n--)
    {
        int pos;
        cin >> pos;

        auto it1 = st.upper_bound(pos);
        auto it2 = it1;
        --it2;

        ml.erase(ml.find(*it1 - *it2));
        ml.insert(*it1 - pos);
        ml.insert(pos - *it2);
        st.insert(pos);

        cout << *ml.rbegin() << " ";
    }

    return 0;
}