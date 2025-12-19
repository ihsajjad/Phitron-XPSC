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
        string s;
        if (n % 2)
        {
            for (int i = 0; i < n; i++)
            {
                s.push_back(i % 2 ? '1' : '0');
            }
        }
        else
        {
            s.push_back('1');
            for (int i = 0; i < n - 2; i++)
                s.push_back('0');

            s.push_back('1');
        }

        cout << s << endl;
    }

    return 0;
}