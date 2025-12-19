#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string main_str = "CODETOWN";

    while (t--)
    {
        string s;
        cin >> s;

        bool flag = true;
        for (int i = 0; i < 8; i++)
        {
            if (is_vowel(s[i]) != is_vowel(main_str[i]))
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}