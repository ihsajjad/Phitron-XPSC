#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cubes;
    cin >> cubes;
    priority_queue<set<int>> pq;
    for (int i = 0; i < cubes; i++)
    {
        int cube;
        cin >> cube;

        if (pq.empty())
        {
            set<int> st = {cube};
            pq.push(st);
            continue;
        }

        while (!pq.empty())
        {
            set<int> st = pq.top();
            pq.pop();

            if (*st.begin() > cube)
            {
                st.insert(cube);
                pq.push(st);
                break;
            }
            else
            {
                pq.push({cube});
                break;
            }
        }
    }

    cout << pq.size() << '\n';

    return 0;
}