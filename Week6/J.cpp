#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    int mx_swords = INT_MIN;
    int g = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx_swords = max(arr[i], mx_swords);
        g = __gcd(g, arr[i]);
    }

    ll stolen_swords = 0;
    for (int i = 0; i < n; i++)
        stolen_swords += mx_swords - arr[i];

    cout << stolen_swords / g << " " << g << endl;

    return 0;
}