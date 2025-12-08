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
        int n, m;
        cin >> n >> m;
        vector<bool> jobs(n + 1, false);
        vector<int> chef_jobs, assi_jobs;

        for (int i = 1; i <= m; i++)
        {
            int idx;
            cin >> idx;
            jobs[idx] = true;
        }

        bool toggle = true;
        for (int i = 1; i <= n; i++)
        {
            if (!jobs[i])
            {
                if (toggle)
                {
                    chef_jobs.push_back(i);
                    toggle = false;
                }
                else
                {
                    assi_jobs.push_back(i);
                    toggle = true;
                }
            }
        }

        if (chef_jobs.size())
        {
            for (int itm : chef_jobs)
                cout << itm << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;

        if (assi_jobs.size())
        {
            for (int itm : assi_jobs)
                cout << itm << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}