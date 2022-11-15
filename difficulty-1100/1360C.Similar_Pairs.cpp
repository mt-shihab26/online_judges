#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

int search_b(const vec<int> a, int target)
{
    int low = 1, high = a.size(), mid;
    while (low <= high)
    {
        mid = low + ((high - low) / 2);
        if (a[mid] == target)
            return mid;
        else if (a[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

bool solve()
{
    int n;
    cin >> n;
    vec<int> a(n + 1);
    int even_ct = 0, odd_ct = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even_ct++;
        else
            odd_ct++;
    }

    even_ct %= 2;
    odd_ct %= 2;

    if (even_ct == 0 && odd_ct == 0)
        return true;

    if (even_ct != odd_ct)
        return false;

    sort(a.begin(), a.end());

    for (int i = 1; i <= n; i++)
    {
        bool is = binary_search(a.begin(), a.end(), a[i] + 1);
        if (is)
            return true;

        bool is2 = binary_search(a.begin(), a.end(), a[i] - 1);
        if (is2 && (a[i] - 1) > 0)
            return true;
    }

    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        cout << (solve() ? "YES" : "NO") << ed;

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Friday, September 02, 2022 | 06:51:10 AM (+06)
