#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cubes;
    cin >> cubes;
    multiset<int> st;
    for (int i = 0; i < cubes; i++)
    {
        int cube;
        cin >> cube;

        if (st.empty())
            st.insert(cube);
        else
        {
            auto it = st.upper_bound(cube);
            if (it == st.end())
                st.insert(cube);
            else
            {
                st.insert(cube);
                st.erase(it);
            }
        }
    }

    cout << st.size() << '\n';

    return 0;
}