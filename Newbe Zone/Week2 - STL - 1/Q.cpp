#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> mp;

    deque<char> palindrom;
    for (char c : s)
        mp[c]++;

    int odds = 0;
    char odd_car;

    // Counting the odd chars
    for (auto item : mp)
        if (item.second % 2)
        {
            odds++;
            odd_car = item.first;
        }

    // If odd chars greater than 1 then it is impossible to create a palindrome
    if (odds > 1)
        cout << "NO SOLUTION" << '\n';
    else
    {
        // Adding the odd chars at the center
        auto odd_it = mp.find(odd_car);
        for (int i = 0; i < odd_it->second; i++)
            palindrom.push_back(odd_it->first);

        mp[odd_car] = 0; // after adding odd remains 0

        // Adding rest chars to make the palindrome
        for (auto item : mp)
            if (item.second)
                for (int i = 0; i < item.second; i++)
                    if (i % 2)
                        palindrom.push_back(item.first);
                    else
                        palindrom.push_front(item.first);

        for (char c : palindrom)
            cout << c << "";
    }

    return 0;
}