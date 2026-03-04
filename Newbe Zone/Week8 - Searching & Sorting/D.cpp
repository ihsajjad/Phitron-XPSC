#include <bits/stdc++.h>
using namespace std;

int first_occ(vector<int> &arr, int n, int key)
{
    int l = 0, r = n - 1, mid, ans = n;
    while (l <= r)
    {
        mid = (r + l) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            r = mid - 1;
        }
        else if (key > arr[mid])
            l = mid + 1;
        else
        {
            r = mid - 1;
            ans = min(ans, mid);
        }
    }
    return ans;
}

int last_occ(vector<int> &arr, int n, int key)
{
    int l = 0, r = n - 1, mid, ans = -1;
    while (l <= r)
    {
        mid = (r + l) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            l = mid + 1;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
            ans = max(ans, mid);
        }
        else
            r = mid - 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int f_oc = first_occ(arr, n, l);
        int l_oc = last_occ(arr, n, r);
        cout << ((l_oc - f_oc) + 1) << " ";
    }

    return 0;
}