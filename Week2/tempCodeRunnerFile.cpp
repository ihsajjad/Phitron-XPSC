#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    map<string, bool> mp;

    while (t--)
    {
        string name;
        cin >> name;

        // If user name doesn't exist
        if (mp.find(name) == mp.end())
        {
            mp[name] = true;
            cout << "OK" << '\n';
        }
        // If user name exist!
        else
        {
            int val = 1;

            map<string, bool>::const_iterator it;
            while (it != mp.end())
            {
                name += to_string(val);
                it = mp.find(name);
                if (it == mp.end())
                {
                    mp[name] = true;
                    cout << name << '\n';
                    break;
                }
                else
                {
                    name.pop_back();
                    val++;
                }
            }
        }
    }

    return 0;
}