#include <bits/stdc++.h>
using namespace std;

#define endn "\n"

bool cmp(int a, int b)
{
    return a > b;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> groups;
    int temp;
    while (n--)
    {
        cin >> temp;
        groups.push_back(temp);
    }
    int ct = 0, i;

    vector<int> v(5, 0);

    for (i = 0; i < groups.size(); i++)
    {
        if (groups[i] == 4)
        {
            v[4]++;
        }
        else if (groups[i] == 3)
        {
            v[3]++;
        }
        else if (groups[i] == 2)
        {
            v[2]++;
        }
        else
        {
            v[1]++;
        }
    }

    ct += v[4];

    ct += v[3];
    v[1] > v[3] ? v[1] = v[1] - v[3] : v[1] = 0;

    ct += v[2] / 2;
    v[2] = v[2] % 2;

    ct += v[2];
    v[1] > (v[2] * 2) ? v[1] = v[1] - (v[2] * 2) : v[1] = 0;

    ct += v[1] / 4;
    v[1] % 4 == 0 ? ct : ct += 1;

    cout << ct << endn;
}
// Solved By: shihab4t
// Thursday, July 15, 2021 | 12:46:06 PM (+06)
