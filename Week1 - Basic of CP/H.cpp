#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    cin >> s >> t;

    int cnt = 0;

    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                long long int sum = i + j + k;
                long long int mul = i * j * k;

                if (sum <= s && mul <= t)
                    cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}