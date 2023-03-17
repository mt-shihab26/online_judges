#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

int get_max(const vec<int> &a)
{
    int ans = INT_MIN, n = a.size();
    for (int i = 1; i < n; i++)
        ans = max(ans, a[i] - a[i - 1]);
    return ans;
}

vec<int> hmap(const vec<int> &a, int x)
{
    vec<int> ans;
    int len = a.size();
    for (int i = 0; i < len; i++)
        if (i != x)
            ans.push_back(a[i]);
    return ans;
}

bool solve()
{
    int n;
    cin >> n;
    vec<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = INT_MAX;
    for (int i = 1; i < n - 1; i++)
    {
        vec<int> tmp = hmap(a, i);
        ans = min(ans, get_max(tmp));
    }

    cout << ans << ed;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Wednesday, July 20, 2022 | 08:08:37 PM (+06)
