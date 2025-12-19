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
        string s;
        cin >> s;

        deque<char> new_string;

        int sm_b = 0, lg_b = 0;

        for (auto it = s.rbegin(); it != s.rend(); it++)
        {
            if (*it == 'b')
                sm_b++;
            else if (*it == 'B')
                lg_b++;
            else
            {
                if (sm_b && *it >= 'a' && *it <= 'z')
                    sm_b--;
                else if (lg_b && *it >= 'A' && *it <= 'Z')
                    lg_b--;
                else
                    new_string.push_front(*it);
            }
        }

        for (char c : new_string)
            cout << c;

        cout << '\n';
    }

    return 0;
}