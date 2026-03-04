#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<long long int> a;
    for (long long int i = 0; i < n; i++)
    {
        long long int val;
        cin >> val;

        if (i % 2)
            a.push_front(val);
        else
            a.push_back(val);
    }

    if (n % 2)
        reverse(a.begin(), a.end());

    for (int item : a)
        cout << item << " ";

    return 0;
}