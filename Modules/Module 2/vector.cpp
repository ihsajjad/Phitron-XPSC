#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // for (auto it = arr.begin(); it != arr.end(); it++)
    //     cout << *it << " ";

    // cout << '\n';

    // for (auto it = arr.rbegin(); it != arr.rend(); it++)
    // {
    //     cout << *it << " ";
    // }

    // cout << '\n';

    // auto lastElement = --arr.end();
    // cout << *lastElement << '\n';

    sort(arr.rbegin(), arr.rend());

    for (auto child : arr)
        cout << child << " ";

    cout << '\n';

    auto mn = min_element(arr.begin(), arr.end());
    auto mx = max_element(arr.begin(), arr.end());

    cout << *mn << " " << *mx << '\n';

    return 0;
}