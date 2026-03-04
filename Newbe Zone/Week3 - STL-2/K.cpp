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
        int n, m, q;
        cin >> n >> m >> q;
        set<int> teacher_pos;
        set<int> teacher_pos_neg;

        for (int i = 0; i < m; i++)
        {
            int teacher_move;
            cin >> teacher_move;
            teacher_pos.insert(teacher_move);
            teacher_pos_neg.insert(-teacher_move);
        }

        for (int i = 0; i < q; i++)
        {
            int student_move;
            cin >> student_move;
            auto left_teacher = teacher_pos_neg.lower_bound(-student_move);
            auto right_teacher = teacher_pos.upper_bound(student_move);

            if (left_teacher == teacher_pos_neg.end())
            {
                cout << (*right_teacher - 1) << '\n';
                continue;
            }
            else if (right_teacher == teacher_pos.end())
            {
                cout << (n - -*left_teacher) << '\n';
                continue;
            }
            else
            {
                int empty_cell = *right_teacher - -*left_teacher;
                cout << (empty_cell / 2) << '\n';
            }
        }
    }

    return 0;
}