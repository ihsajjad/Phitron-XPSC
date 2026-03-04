#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        bool flag = false;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i - 1] == s[i] && !flag)
            {
                if (s[i] == 'a')
                    s.insert(s.begin() + i, 'z');
                else if (s[i] == 'z')
                    s.insert(s.begin() + i, 'a');
                else
                    s.insert(s.begin() + i, s[i] - 1);

                flag = true;
                break;
            }
        }

        if (!flag)
        {
            if (s.back() == 'a')
                s.push_back('z');
            else if (s.back() == 'z')
                s.push_back('a');
            else
                s.push_back(s.back() - 1);
        }

        cout << s << '\n';
    }

    return 0;
}