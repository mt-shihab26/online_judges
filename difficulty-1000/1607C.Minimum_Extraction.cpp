#include <bits/stdc++.h>
using namespace std;

#define endn '\n'
#define umap unordered_map
#define uset unordered_set
#define pb push_back

typedef short int sint;
typedef unsigned int uint;
typedef long long int llint;
typedef unsigned long long int ullint;

inline void first_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

#define GLOBAL_ARRAY_SIZE 10000005
#define LOCAL_ARRAY_SIZE 100005
#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

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
    first_io();

    int t;
    cin >> t;
    while (t--)
    {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Thursday, November 11, 2021 | 12:42:40 PM (+06)
