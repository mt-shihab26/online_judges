#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

bool test_case()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n % 2 == 0)
        return true;

    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] >= a[i])
        {
            return true;
        }
    }
    return false;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cout << (test_case() ? "YES" : "NO") << endn;
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shh26b)
// Monday, November 15, 2021 | 06:52:21 PM (+06)
