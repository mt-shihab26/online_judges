#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

void test_case()
{
    int n, i, ans = INT_MIN;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ans = a[0];

    for (int i = 1; i < n; i++)
    {
        ans = max(ans, a[i] - a[i - 1]);
    }
    cout << ans << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Thursday, November 11, 2021 | 12:42:40 PM (+06)
