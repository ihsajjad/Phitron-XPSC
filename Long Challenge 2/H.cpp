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
        stack<char> b, a;
        cin >> s;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (!b.empty())
            {
                if (b.top() == ')' && s[i] == '(')
                    b.pop();
                else
                    b.push(s[i]);
            }
            else
                b.push(s[i]);
        }

        while (!b.empty())
        {
            a.push(b.top());
            b.pop();
        }

        while (!a.empty())
        {
            cout << a.top();
            a.pop();
        }
    }

    return 0;
}